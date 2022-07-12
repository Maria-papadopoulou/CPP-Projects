#include <iostream>
#include <stdio.h>

struct vehicle
{
	std::string name;
	std::string model;
	int id;	
};

using namespace std;
vehicle *init();
int petrol_price(int, int , int , int );
void show_price();
vehicle& show_owner (const vehicle *, const int);

vehicle *init()
{
	vehicle *own =new vehicle [4];
	own[0].name="Σοφία";
	own[0].model="Αυτοκίνητο";
	own[0].id=14150;
	own[1].name="Νίκος";
	own[1].model="Μηχανή";
	own[1].id=16170;
	own[2].name="?ννα";
	own[2].model="Τροχόσπιτο";
	own[2].id=18190;
	own[3].name="Μαρία";
	own[3].model="Φορτηγό";
	own[3].id=20210;
	return own;
	
}

int pin()
{
	int Pin=89703;
	cout<<endl;
	cout<<"Κωδικός Εισόδου Χρήστη: "<<Pin<<endl;
	return Pin;
}
vehicle& show_owner (const vehicle *n, const int numb)
{
    int i;
    for (i=0; i <numb; i++)
   
    cout<<n[i].name << "\t  " <<n[i].model << "\t  " <<n[i].id <<endl;
}
void show_price()
{
const int price=20;
int hour=7;
int total;
total=price*hour;
	cout<<"Ώρες παραμονής στο parcking: "<<hour<<endl;
	cout<<"Τιμή για κάθε όχημα που παραμένει στο parcking: "<<total<< "?"<<endl;
}
int petrol_price(int p_c, int p_m, int p_t, int p_f)//συνολική τιμή βενζίνης και για τα 4 οχήματα
{
	int sum=0;
	sum+=p_c+p_m+p_t+p_f;
	return sum;
}
int main(int argc, char **argv)
{
	system("chcp 1253");
	int *Pin;
	Pin=new int(5);
	cout<<endl;
	cout<<"\tΧώρος Στάθμευσης Οχημάτων!"<<endl;
	pin();
	cout<<"*************************************"<< endl;
	cout<<"\tΣτοιχεία Πελάτών "<<endl;
	cout<<"*************************************"<<endl;
	vehicle *nm=init();
	cout<<endl;
	cout<<"ΟΝΟΜΑ"<< " \t  "<<"ΜΟΝΤΕΛΟ"<< "\t   " <<" id "<<endl;
	show_owner(nm,4);
	cout<<endl;
	cout<<"*************************************"<< endl;
	cout<<"\tΣυνολικό Ποσό Πληρωμής"<<endl;
	cout<<"*************************************"<< endl;
	show_price();
	cout <<"Συνολική τιμή βενζίνης για όλα τα οχήματα: "<<petrol_price(30,65,80,50)<< "?"<<endl;
	delete Pin;
	delete[] nm;
return 0;
}
