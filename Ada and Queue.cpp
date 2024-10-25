//MD.Rasheduzzaman Imran
//Alhamdulillah for everything

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	bool reverse=false;
	ll n;
	cin>>n;
	string s;
	deque<int> q;
	while(n--)
	{
		cin>>s;
		if(s=="toFront")
		{
			int val;
			cin>>val;
			if(!reverse)
			{
				q.push_front(val);
			}
			else
			{
				q.push_back(val);
			}
		}
		else if(s=="front")
		{
			if(!reverse)
			{
				if(q.empty())
				{
					cout<<"No job for Ada?"<<'\n';
				}
				else
				{
					cout<<q.front()<<'\n';
					q.pop_front();
				}
			}
			else
			{
				if(q.empty())
				{
					cout<<"No job for Ada?"<<'\n';
				}
				else
				{
				    cout<<q.back()<<'\n';
					q.pop_back();
				}
			}
		}
		else if(s=="back")
		{
			if(reverse)
			{
				if(q.empty())
				{
					cout<<"No job for Ada?"<<'\n';
				}
				else
				{
					cout<<q.front()<<'\n';
					q.pop_front();
				}
			}
			else
			{
				if(q.empty())
				{
					cout<<"No job for Ada?"<<'\n';
				}
				else
				{
					cout<<q.back()<<'\n';
					q.pop_back();
				}
			}
		}
		else if(s=="reverse")
			reverse=!reverse;
		else if(s=="push_back")
		{
			int val;
			cin>>val;
			if(reverse)
			{
				q.push_front(val);
			}
			else
			{
				q.push_back(val);
			}
		}
	}
	return 0;
}
