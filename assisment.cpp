#include<iostream>
using namespace std;
class event{
	public:
		void program()
		{
			int total,min,num;
            float cost1,cost2,average,totalcost,deposite;
            char name[30],first[20],last[20];
            
            
             cout<<"********************Event management system******************"<<endl;
	         cout<<"Enter the name of event"<<endl;
	         cin>>name;
	   
	         cout<<"Enter the customer's first and last name"<<endl;
	         cin>>first>>last;
	   
	         cout<<"Enter the number of guest"<<endl;
	         cin>>total;
	   
	         cout<<"Enter the number of minutes in the event"<<endl;
	         cin>>min;
	   
	         cout<<"===================Event estimate for:rakesh kharva================="<<endl;
	         cout<<"Number of server:";
	         cin>>num;
	   
	         cout<<"The cost for server:";
	         cin>>cost1;
	   
	         cout<<"The cost for food is:";
	         cin>>cost2;
	   
	         average=cost2/total;
	         cout<<"Average cost per person: "<<average<<endl<<endl<<endl;
	   
	         totalcost=cost2+(cost1*num);
	         cout<<"Total cost is: "<<totalcost<<endl;
	   
	         cout<<"Please deposit a 25% deposit to reserve the event"<<endl;
	         deposite = totalcost * .25;

	        cout<<"The deposite needed is: "<<deposite<<endl;
	}
};
int main()
{
	event e1;
	e1.program();
}
