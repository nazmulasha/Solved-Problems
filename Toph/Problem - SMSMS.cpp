#include <bits/stdc++.h>

using namespace std;
//not my template
struct SegmentTreeNode {
	int prefixMaxSum, suffixMaxSum, maxSum, sum;

	void assignLeaf(int value) {
		prefixMaxSum = suffixMaxSum = maxSum = sum = value;
	}

	void merge(SegmentTreeNode& left, SegmentTreeNode& right) {
		sum = left.sum + right.sum;
		prefixMaxSum = max(left.prefixMaxSum, left.sum + right.prefixMaxSum);
		suffixMaxSum = max(right.suffixMaxSum, right.sum + left.suffixMaxSum);
		maxSum = max(prefixMaxSum, max(suffixMaxSum, max(left.maxSum, max(right.maxSum, left.suffixMaxSum + right.prefixMaxSum))));
	}

	int getValue() {
		return maxSum;
	}
};

template<class T, class V>
class SegmentTree {
	SegmentTreeNode* nodes;
	int N;

public:
	SegmentTree(T arr[], int N) {
		this->N = N;
		nodes = new SegmentTreeNode[getSegmentTreeSize(N)];
		buildTree(arr, 1, 0, N-1);
	}

	~SegmentTree() {
		delete[] nodes;
	}

	V getValue(int lo, int hi) {
		SegmentTreeNode result = getValue(1, 0, N-1, lo, hi);
		return result.getValue();
	}

	void update(int index, T value) {
		update(1, 0, N-1, index, value);
	}

private:
	void buildTree(T arr[], int stIndex, int lo, int hi) {
		if (lo == hi) {
			nodes[stIndex].assignLeaf(arr[lo]);
			return;
		}

		int left = 2 * stIndex, right = left + 1, mid = (lo + hi) / 2;
		buildTree(arr, left, lo, mid);
		buildTree(arr, right, mid + 1, hi);
		nodes[stIndex].merge(nodes[left], nodes[right]);
	}

	SegmentTreeNode getValue(int stIndex, int left, int right, int lo, int hi) {
		if (left == lo && right == hi)
			return nodes[stIndex];

		int mid = (left + right) / 2;
		if (lo > mid)
			return getValue(2*stIndex+1, mid+1, right, lo, hi);
		if (hi <= mid)
			return getValue(2*stIndex, left, mid, lo, hi);

		SegmentTreeNode leftResult = getValue(2*stIndex, left, mid, lo, mid);
		SegmentTreeNode rightResult = getValue(2*stIndex+1, mid+1, right, mid+1, hi);
		SegmentTreeNode result;
		result.merge(leftResult, rightResult);
		return result;
	}

	int getSegmentTreeSize(int N) {
		int size = 1;
		for (; size < N; size <<= 1);
		return size << 1;
	}

	void update(int stIndex, int lo, int hi, int index, T value) {
		if (lo == hi) {
			nodes[stIndex].assignLeaf(value);
			return;
		}

		int left = 2 * stIndex, right = left + 1, mid = (lo + hi) / 2;
		if (index <= mid)
			update(left, lo, mid, index, value);
		else
			update(right, mid+1, hi, index, value);

		nodes[stIndex].merge(nodes[left], nodes[right]);
	}
};

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,m,q;
        cin>>m>>n>>q;
        int mat[m][n];
        int sz=n*m;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
            }
        }
        int arr[n*m],ind[m][n];
        memset(arr,0,sizeof(arr));
        memset(ind,0,sizeof(ind));
        int cnt=n*m;
        int i, k = 0, l = 0,in=0;
        while (k < m && l < n)
        {
            for (i = l; i < n; ++i)
            {
                //cout<<mat[k][i]<<" ";
                arr[in]=mat[k][i];
                ind[k][i]=in;
                in++;
            }
            k++;
            for (i = k; i < m; ++i)
            {
               // cout<<mat[i][n-1]<<" ";
                arr[in]=mat[i][n-1];
                ind[i][n-1]=in;
                in++;
            }
            n--;
            if ( k < m)
            {
                for (i = n-1; i >= l; --i)
                {
                   // cout<<mat[m-1][i]<<" ";
                    arr[in]=mat[m-1][i];
                    ind[m-1][i]=in;
                    in++;
                }
                m--;
            }
            if (l < n)
            {
                for (i = m-1; i >= k; --i)
                {
                   // cout<<mat[i][l]<<" ";
                    arr[in]=mat[i][l];
                    ind[i][l]=in;
                    in++;
                }
                l++;
            }
        }
        SegmentTree<int,int> st(arr,sz);
        cout<<"Case "<<t<<":"<<endl;
        while(q--)
        {
            int type;
            cin>>type;
            if(type==1)
            {
                long long int ans=st.getValue(0,sz-1);
                ans=max(ans,0LL);
                cout<<ans<<endl;
            }
            else
            {
                int p,q,r;
                cin>>p>>q>>r;
                p--;
                q--;
                int in=ind[p][q];
              //  cout<<in<<endl;
                st.update(in,r);
            }
        }
    }
    return 0;
}