#include <iostream>
#include <iomanip>
using namespace std;

int x=0;
int T=0;
int choice;
void purchase();
void prt_bill();
void exchange();
void return_product();

struct cart
{
	int S;
	string Prod;
	string Brd;
	int Qua;
	int pr;
	int Tpr;
}ob[10];

class Product
{
	public:
		int Sno;
		string brand;
		string avail;
		int price;

		Product(int n,string Br,string Av,int Pr)
		{
			Sno = n;
			brand = Br;
			avail = Av;
			price = Pr;
		}
		void display()
		{
			if(Sno==1)
			{
			cout<< left<< setw(7)<< "Sno."<< left<< setw(10)<< "Brand"<< left<< setw(15)<< "Availability"<< left
				<< setw(15)<< "Price"<<endl;
			}
        	cout<<"\n" <<left<< setw(7)<< Sno
            	<< left<< setw(10)<< brand
            	<< left<< setw(15)<< avail
            	<< left<<"Rs. "<< setw(15)<< price;
		}
		void bought(int I,string PR)
		{
            int q;
			cout<<"\nHow many do you want: ";
			cin>>q;
			ob[I].Prod = PR;
			ob[I].S = I+1;
			ob[I].Brd = brand;
			ob[I].Qua = q;
			ob[I].pr = price;
			ob[I].Tpr = price*q;
		}

};


    //int j;
    //string prod[10];
	//int quan_val[10][3];
	//int produc;
	//int b,i=0;

Product Mobi[3] = {Product(1,"Apple","Available",65000),Product(2,"Samsung","Available",25000),Product(3,"One+","Available",30000)};

Product Tv[3] = {Product(1,"LG","Available",40000),Product(2,"Samsung","Available",55000),Product(3,"Panasonic","Out of stock",45000)};

Product Fridge[3] = {Product(1,"LG","Available",15000),Product(2,"Panasonic","Available",18800),Product(3,"Samsung","Available",22000)};

Product Lap[3] = {Product(1,"Lenovo","Available",71000),Product(2,"Asus","Available",64500),Product(3,"Apple","Available",150000)};

Product Hdpho[3] = {Product(1,"Boat","Available",7500),Product(2,"Skullcandy","Available",6899),Product(3,"JBL","Out of Stock",8000)};


void Purchase()
{
    int A,b,i=0;

	do
	{T=i+1;
	 b=0;
	 int p,j;
	 cout<<"\nEnter the product Sno. from main menu : ";
	 cin>>A;
		switch(A)
		{
			case 1: Mobi[0].display();
					Mobi[1].display();
					Mobi[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>p;
					Mobi[p-1].bought(i,"Mobile");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 2: Tv[0].display();
					Tv[1].display();
					Tv[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>p;
					Tv[p-1].bought(i,"Television");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 3: Fridge[0].display();
					Fridge[1].display();
					Fridge[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>p;
					Fridge[p-1].bought(i,"Refrigerator");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 4: Lap[0].display();
					Lap[1].display();
					Lap[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>p;
					Lap[p-1].bought(i,"Laptop");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 5: Hdpho[0].display();
					Hdpho[1].display();
					Hdpho[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>p;
					Hdpho[p-1].bought(i,"Headphone");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			default: cout<<"\nPlease select the product from the list of items: "<<endl;
				 	 b = 1;
		}
	}while (b==1);

}
void prt_bill()
	{int j=0,Gt=0;
		cout<<"\nItems you have purchased are:"<<endl;
		cout<<"\n"<<left<<setw(7)<<"Sno."<<left<<setw(17)<<"Product"<<left<<setw(15)<<"Brand"<<left<<setw(17)
			<<"Price"<<left<<setw(15)<<"Quantity"<<left<<"Total price"<<endl;

		for(j;j<T;++j)
		{
			cout<<"\n"<< left<< setw(7)<< ob[j].S
            	<< left<< setw(16)<< ob[j].Prod
            	<< left<< setw(16)<< ob[j].Brd
            	<< left<<"Rs. "<< setw(15)<< ob[j].pr
            	<< left<< setw(14)<< ob[j].Qua
				<<left<<"Rs. "<< ob[j].Tpr<<endl;
			Gt += ob[j].Tpr;
		}
		cout<<"\n\t\t\tGrand Total"<<Gt;
	}

void exchange()
{
int bill,c,w;
cout<<"\nexchange price of mobile: 1000\nexchange price of TV:2000\nexchange price for fridge:3000\nexchange price of headphones:500\nexchange price for laptop:4000";
cout<<"\nenter the product you want to exchange\n1.Mobile\n2.TV\n3.Fridge\n4.Laptop\n5.Headphones";
cout<<"\nenter your choice:\n";
cin>>c;
if(c==1)
{
                    Mobi[0].display();
					Mobi[1].display();
					Mobi[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>w;
					bill=Mobi[w-1].price-1000;

}
if(c==2)
{
                    Tv[0].display();
					Tv[1].display();
					Tv[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>w;
					bill=Tv[w-1].price-2000;

}
if(c==3)
 {
                    Fridge[0].display();
					Fridge[1].display();
					Fridge[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>w;
					bill=Fridge[w-1].price-3000;
 }
 if(c==4)
 {
     Lap[0].display();
					Lap[1].display();
					Lap[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>w;
					bill=Lap[w-1].price-4000;

 }
 if(c==5)
 {
     Hdpho[0].display();
					Hdpho[1].display();
					Hdpho[2].display();
					cout<<"\nWhat would you like to buy: ";
					cin>>w;
					bill=Hdpho[w-1].price-500;
 }
 cout<<"\nbill= "<<bill;
}

void replace(){
	int c;
	string reason;

	cout << "\n\nWhy do you want to replace this product?";
	cout << "\n 1. Product is Damaged \n 2. Wrong model was sent \n 3. Wrong product was sent \n 4. Other" ;
	cin>>c; // reason for replace
	switch(c){
		case 1:
			cout<<"\n\nProduct is Damaged";
			break;
		case 2:
			cout<<"\n\nWrong model was sent";
			break;
		case 3:
			cout<<"\n\nWrong product was sent";
			break;
		case 4:
			cout<<"\n\nPlease enter a reason: ";
			cin>>reason;
			break;
		default:
			cout<<"\n\nChoose a valid reason"<<endl;
			replace();
	}

	cout<<"\n\nWe apologize for the inconvenience"<<endl;
	cout << "Your product will be replaced in 2-3 business days"<<endl;
	//Return to main menu? (y/n)

}

void return_product()
{
        int a;
        int rep;

        cout<<"\nWhat is your reason for the return of the product:"<<endl;
        cout<<"1. Product was damaged."<<endl;
        cout<<"2. No need for the product anymore."<<endl;
        cout<<"3. Got the same product for less price on other site."<<endl;
        cout<<"4. Product was not as I expected."<<endl;
        cout<<"5. Other"<<endl;
        cout<<"Enter Here:";
        cin>>a;
        cout<<endl;

        if(a==1){
            cout<<"Would you like a replacement for the product?(y/n)"<<endl;
            cin>>rep;
            if (rep=='y') {
                replace();
            }

            else if (rep=='n'){
                cout<<"Your return request has been accepted!"<<endl;
            }
        }

        else if(a==2||a==3||a==4){
            cout<<"Your return request has been accepted!"<<endl;
        }

        else if(a==5){
            string reason;
                cout<<"Please enter your reason for returning here=>"<<endl<<endl;
                cin>>reason;
                cout<<endl;
                cout<<"Your return request has been accepted!"<<endl<<endl;

        }
        else{
             cout<<"Enter a valid reason for ur return of the product!"<<endl;
             return_product();
        }
        cout<<"============================================================================"<<endl;

        cout<<"Your refund request has been initiated."<<endl;
        cout<<"Your refund amount will be transferred in 3 to 4 working days"<<endl;
        cout<<" after the product has been returned."<<endl;
        cout<<"Thank you for shopping with us:)\n\n";

}

int main()
{
	cout << "\n\nWelcome!"<<endl;
	cout << "\nWhat can we help you with?"<<endl;
    LOOP:cout << "1. Purchase \n2. Exchange \n3. Replace \n4. Return \n5. Exit Shop"<<endl;
	cout<<"\n\nEnter Here:";
	cin>>choice;

	switch(choice) {

		case 1:
		cout << "\nWelcome!"<<endl;
	    cout << "\nWhat would you like to buy?"<<endl;
	    cout << "\nMain menu";
	    cout << "\n1.> Mobile"<<"\n2.> Television"<<"\n3.> Refrigerator"<<"\n4.> Laptop"<<"\n5.> Headphone"<<endl;
        Purchase();
        prt_bill();
        cout<< "\nWhat else can I help you with\n";
        goto LOOP;
		break;

		case 2:
		cout << "\n\nChoose a product to exchange";
        exchange();
        cout<< "\nWhat else can I help you with\n";
        goto LOOP;
		break;

		case 3:
		cout << "\n\nChoose a product to replace";
        replace();
        cout<< "\nWhat else can I help you with\n";
        goto LOOP;
		break;

		case 4:
		cout << "\n\nChoose a product to return";
        return_product();
        cout<< "\nWhat else can I help you with\n";
        goto LOOP;
		break;

		case 5:
            cout<< "Thank you, come again!";
            break;

		default:
		cout << "\n\nPlease choose from the given options";
		main();
	}
  return 0;
}
