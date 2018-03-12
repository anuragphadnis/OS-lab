#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int pno,at,bt,ct,tat,wt;
};
bool compare(node a,node b)
{
	if (a.at<b.at)return 1;
	else if (a.at>b.at)return 0;
	else return a.pno<b.pno;
}
bool compare2(node a,node b)
{
	return a.pno<b.pno;
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
	sort(A,A+N,compare);
	int pchal=0,time=0;
	while(pchal<N)
	{
		cout<<"time hua hai"<<time<<endl;
		if(time>=A[pchal].at)
		{
			A[pchal].ct=time+A[pchal].bt;
			cout<<"process chali "<<pchal<<" "<<time<<" "<<A[pchal].bt<<" "<<A[pchal].ct<<endl;
			time+=A[pchal].bt;
			A[pchal].tat=A[pchal].ct-A[pchal].at;
			A[pchal].wt=A[pchal].tat-A[pchal].bt;
			pchal++;
		}
		else
		{
			time++;
			cout<<"Nothing done"<<endl;
		}
	}
	sort(A,A+N,compare2);
	cout<<"\nAnswer is\nPNO AT BT CT TAT WT\n";
	for(int i=0;i<N;i++)
	{
		cout<<A[i].pno<<" "<<A[i].at<<" "<<A[i].bt<<" "<<A[i].ct<<" "<<A[i].tat<<" "<<A[i].wt<<endl;
	}
}
