#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int pno,at,bt,ct,tat,wt;
};
bool compare(node a,node b)
{
	if (a.bt<b.bt)return 1;
	else if (a.bt>b.bt)return 0;
	else if (a.at<b.at)return 1;
	else if (a.at>b.at)return 0;
	else return a.pno<b.pno;
}
bool compare2(node a,node b)
{
	return a.pno<b.pno;
}
bool compare3(nide a,node b)
{
	return a.at<b.at;
}
int main()
{
	int N;
	cout<<"\nEnter number of nodes";
	cin>>N;
	node A[N];
	for(int i=0;i<N;i++)
	{
		cout<<"\nEnter AT & BT of "<<i<<" th process";
		A[i].pno=i;
		cin>>A[i].at>>A[i].bt;
	}
	sort(A,A+N,compare3);
	priority_queue<node>q;
	q.push(A[0]);
	cout<<"\nAnswer is\nPNO\tAT\tBT\tCT\tTAT\tWT\n";
	for(int i=0;i<N;i++)
	{
		cout<<A[i].pno<<"\t"<<A[i].at<<"\t"<<A[i].bt<<"\t"<<A[i].ct<<"\t"<<A[i].tat<<"\t"<<A[i].wt<<endl;
	}
}

