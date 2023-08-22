#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class DynamicStringArray{
	string *items;
	int size;
	
	public:
		DynamicStringArray(){
			size = 0;
			items = new string[size];
		}
		
		void add(string newItem){
			string *newArray =  new string[size+1];
			
			for(int i=0; i<size ; i++)
			{
				newArray[i] = items[i]; 
			}
			
			newArray[size] = newItem;
			
			
			size++;
			
			delete []items;
			
			items = newArray;
		}
		
		void remove(int indexNum){
			indexNum = indexNum - 1;
			
			for(int i=indexNum;i<size-1;i++)
			{
				items[i] = items[i+1];
			}
			
			size--;
			
		}
		
		void printAll(){
			for(int i=0;i<size;i++)
			{
				cout<<i+1<<". "<<items[i]<<endl;
				cout<<endl<<endl;
			}
		}
		
		string getSpecific(int indexNum){
			return items[indexNum-1]; 
		}
		
		int findAndReturnIndex(string content){
			int counter = -1;
			
			for(int i=0;i<size;i++)
			{
				if(content == items[i])
				{
					return i;
				}
				else
				{
					counter = -1;
				}
			}
			
			return counter;
		}
		
		int getSize(){
			return size;
		}
		
		bool checkSerialNum(string serialNum){
			
			int counter = 0;
			
			for(int i=0;i<size;i++){
				if(serialNum == items[i])
				{
					return true;
				}
				else
				{
					counter++;
				}
			}
			
			if(counter > 0)
				return false;
			
				return false;
		}
		
		string getSerialNum(string ID){
			
			int counter = 0;
			
			for(int i=0;i<size;i++)
			{
				if(ID == items[i])
				{
					return items[i];
				}
				else
				{
					counter++;
				}
			}
			
			if(counter > 0)
			{
				return "Product Not Found";
			}
		}
		
		string returnSerialNum(int index){
			if(index < size){
		
				return items[index];
			
			}
			
			return "";
		}
		
		
};


class DynamicStringArrayForCart{
	string *items;
	int size;
	
	public:
		DynamicStringArrayForCart(){
			size = 0;
			items = new string[size];
		}
		
		void add(string newItem){
			string *newArray =  new string[size+1];
			
			for(int i=0; i<size ; i++)
			{
				newArray[i] = items[i]; 
			}
			
			newArray[size] = newItem;
			
			
			size++;
			
			delete []items;
			
			items = newArray;
		}
		
		void remove(int indexNum){
			indexNum = indexNum - 1;
			
			for(int i=indexNum;i<size-1;i++)
			{
				items[i] = items[i+1];
			}
			
			size--;
			
		}
		
		void printAll(){
			for(int i=0;i<size;i++)
			{
				cout<<i+1<<". "<<items[i]<<endl;
				cout<<endl<<endl;
			}
		}
		
		string getSpecific(int indexNum){
			return items[indexNum-1]; 
		}
		
		int findAndReturnIndex(string content){
			int counter = -1;
			
			for(int i=0;i<size;i++)
			{
				if(content == items[i])
				{
					counter = i;
				}
				else
				{
					counter = -1;
				}
			}
			
			return counter;
		}
		
		int getSize(){
			return size;
		}
		
		bool checkSerialNum(string serialNum){
			
			int counter = 0;
			
			for(int i=0;i<size;i++)
			{
				if(serialNum == items[i])
				{
					return true;
				}
				else{
					counter++;
				}
			}
			
			if(counter > 0){
				return false;
			}
		}
		
		string getSerialNum(string ID){
			
			int counter = 0;
			
			for(int i=0;i<size;i++)
			{
				if(ID == items[i])
				{
					return items[i];
				}
				else
				{
					counter++;
				}
			}
			
			if(counter > 0)
			{
				return "Product Not Found";
				cout<<endl;
			}
		}
		
		string returnSerialNum(int index){
			if(index < size){
		
				return items[index];
			
			}
			
			return "Not Found";
		}
		
		~DynamicStringArrayForCart(){
			delete[] items;
		}
		
};


class DynamicfloatArray{
	float *items;
	int size;
	
	public:
		
		DynamicfloatArray(){
			size = 0;
			items = new float[size];
		}
		
		void add(float newItem){
			float *newArray =  new float[size+1];
			
			for(int i=0; i<size ; i++)
			{
				newArray[i] = items[i]; 
			}
			
			newArray[size] = newItem;
			
			size++;
			
			delete []items;
			
			items = newArray;
		}
		
		void remove(int indexNum){
			indexNum = indexNum - 1;
			
			for(int i=indexNum;i<size-1;i++)
			{
				items[i] = items[i+1];
			}
			
			size--;
			
		}
		
		void printAll(){
			for(int i=0;i<size;i++){
				cout<<i+1<<". "<<items[i]<<endl;
			}
		}
		
		float getSpecific(int indexNum){
			return items[indexNum]; 
		}
		
		
		int getSize(){
			return size;
		}
};


class ItemsDetails{
	
	public:
		
	string sectionName;
	DynamicStringArray itemsID;
	DynamicStringArray itemsNames;
	DynamicStringArray itemsDescription;
	DynamicfloatArray itemsPrice;
		
		void addItem(string ID , string name , string description , float price){
				itemsID.add(ID);
				itemsNames.add(name);
				itemsDescription.add(description);
				itemsPrice.add(price);
		}
		
		void removeItem(string ID){
			int indexNum = 1 + itemsID.findAndReturnIndex(ID);
			
				itemsID.remove(indexNum);
				itemsNames.remove(indexNum);
				itemsDescription.remove(indexNum);
				itemsPrice.remove(indexNum);
			
		}
		
		void printProductDetailsByID(string ID){
			int index =  itemsID.findAndReturnIndex(ID);
					
			if(index == -1)
			{

			}
			else
			{
			
				cout<<endl;
				cout<<"---------------------------------------------------------"<<endl<<endl;
				cout<<"Item ID : "<<itemsID.getSpecific(1+index)<<endl;
				cout<<"Item Name : "<<itemsNames.getSpecific(1+index)<<endl;
				cout<<"Item Description : "<<itemsDescription.getSpecific(1+index)<<endl;
				cout<<"Item Price : "<<itemsPrice.getSpecific(index)<<endl;
				cout<<"---------------------------------------------------------"<<endl<<endl<<endl;
			}
			
		}
		
		void printAll(){
			int size = itemsID.getSize();
			
			for(int i=0;i<size;i++)
			{
				cout<<i+1<<". "<<itemsID.getSpecific(i+1)<<"   "<<itemsNames.getSpecific(i+1)<<endl;
				cout<<endl<<endl;
			}
		}
		
		void printSerialNumberAndNameByID(string ID)
		{
			
			int index =  itemsID.findAndReturnIndex(ID);
			int size = itemsID.getSize();
			
			if(index != -1)
			{
			
				cout<<itemsID.getSpecific(index+1)<<"   "<<itemsNames.getSpecific(index+1)<<endl;
				cout<<endl<<endl;
			
			}
		}
		
		float getPriceOfProductByID(string ID){
			int index = itemsID.findAndReturnIndex(ID);
			
			if(index >= 0 && index < itemsID.getSize())
			{
				return itemsPrice.getSpecific(index);
			}
			else
			{
				return 0;
			}

		}
		
		void setSectionName(string name){
			sectionName = name;
		}
		
		string getSectionName(){
			return sectionName;
		}
	
};


class Admin{
	string name;
	string password;
	
	public:
		Admin(){
			name = "----";
			password = "----";
		}
		
		void setDetails(string name , string password){
			this->name = name;
			this->password = password;
		}
		
		string getName(){
			return name;
		}
		
		string getPassword(){
			return password;
		}
};


int checkAdminDetails(Admin *&Admins , int size){
	string username;
	string password;
	int counter = 0;
	
	cout<<"----------------------------------------------"<<endl<<endl;
	cout<<"Enter Username : ";
	fflush(stdin);
	getline(cin , username);

	cout<<"Enter Your Password : ";
	fflush(stdin);
	getline(cin , password);
	
    cout<<"-----------------------------------------------"<<endl<<endl;
	
	for(int i=0;i<size;i++)
	{
		if(Admins[i].getName() == "admin" && Admins[i].getPassword() == "admin" && password == "admin" && username == "admin")
		{
			
			cout<<" _______________________________________________"<<endl;
			cout<<"|                                               |"<<endl;
			cout<<"|  You Must Change Your User Name And Password  |"<<endl;
			cout<<"|_______________________________________________|"<<endl<<endl<<endl;
			
			cout<<"-------------------------------------------------"<<endl<<endl;
			
			cout<<"Enter New Username : ";
			fflush(stdin);
			getline(cin , username);
						
			cout<<"Enter New Password : ";
			fflush(stdin);
			getline(cin , password);
			
			cout<<"-------------------------------------------------"<<endl<<endl;
			
			Admins[i].setDetails(username , password);
			
			
			cout<<" _____________________________________________________"<<endl;
			cout<<"|                                                     |"<<endl;
			cout<<"|   Password Changed Successfully Now Sign In Again   |"<<endl;
			cout<<"|_____________________________________________________|"<<endl<<endl;
			
			return 2;
		}
		else if(Admins[i].getName() == username && Admins[i].getPassword() == password )
		{
			return 1;
		}
		else
		{
			
			counter++;
		}
		
	}
	
		if(counter != 0)
		{
			
			cout<<" ___________________________________________________________"<<endl;
			cout<<"|                                                           |"<<endl;
			cout<<"|              . . . Wrong Credentials . . .                |"<<endl;
			cout<<"|                                                           |"<<endl;
			cout<<"|           Try Again With The Right Credentials            |"<<endl;
			cout<<"|___________________________________________________________|"<<endl<<endl;
		}
		
	return -1;
	
}


int adminEditingMenu(){
	int editingOption;
	
	cout<<" ____________________________________"<<endl;
	cout<<"|                                    |"<<endl;
	cout<<"|     1. Add Item                    |"<<endl;
	cout<<"|     2. Remove Item                 |"<<endl;
	cout<<"|     3. Print All Items             |"<<endl;
	cout<<"|     4. Print By Serial Number      |"<<endl;
	cout<<"|     5. Back                        |"<<endl;
	cout<<"|____________________________________|"<<endl<<endl;
	
	cout<<"Enter Your Option : ";
	cin>>editingOption;
	
	cout<<"---------------------------------------------------------"<<endl<<endl;
	
	if(editingOption < 1 || editingOption > 5)
	{
		
		cout<<" _________________"<<endl;
		cout<<"|                 |"<<endl;
		cout<<"|  Wrong Option   |"<<endl;
		cout<<"|_________________|"<<endl<<endl;
	}
	else if(editingOption == 5)
	{
		return editingOption;
	}
	else
	{
		return editingOption;
	}
	
	return editingOption;
}


int adminsEditing( Admin *&Admins , int size){
	int option;
	string name;
	int number;
	string password;
	
	cout<<" ____________________________________________"<<endl;
	cout<<"|                                            |"<<endl;
	cout<<"|  We Have The Following Admins Till Now :-  |"<<endl;
	cout<<"|____________________________________________|"<<endl<<endl;
	
	for(int i = 0;i<size;i++)
	{
		cout<<i+1<<". "<<Admins[i].getName()<<endl;
		cout<<"---------------------------------------------------------"<<endl;
	}
	
	cout<<endl<<endl;
	
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|    1. Add New Admin                    |"<<endl;
	cout<<"|    2. Remove An Admin                  |"<<endl;
	cout<<"|    3. Change Details Of Admin          |"<<endl;
	cout<<"|    4. Show All Details Of Admins       |"<<endl;
	cout<<"|    5. Back                             |"<<endl;
	cout<<"|________________________________________|"<<endl<<endl;
	cout<<"Enter Your Option : ";
	cin>>option;
	
	cout<<"---------------------------------------------------------"<<endl<<endl;
	
	
	if(option == 1)
	{
		cout<<"Enter The Name Of The New Admin : ";
		fflush(stdin);
		getline(cin , name);
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		cout<<"Enter The Password Of The New Admin : ";
		fflush(stdin);
		getline(cin , password);
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		int counter = 0;
		
		for(int i=0;i<size;i++)
		{
			
			if(name == Admins[i].getName())
			{
				counter++;
			}
							
			}
						
		if(counter == 0)
		{
			
			Admin *newAdmins = new Admin [size + 1];
		
			for(int i=0;i<size;i++)
			{
				newAdmins[i] = Admins[i];
			}
			
			
			newAdmins[size].setDetails(name , password);
			
			size++;
			
			delete [] Admins;
			
			Admins = newAdmins; 
			
			
			cout<<" ____________________________"<<endl;
			cout<<"|                            |"<<endl;
			cout<<"|  Admin Added Successfully  |"<<endl;
			cout<<"|____________________________|"<<endl<<endl;
				
		}
		else
		{
			cout<<endl;
			cout<<" ____________________________"<<endl;
			cout<<"|                            |"<<endl;
			cout<<"|    Admin Already Exists    |"<<endl;
			cout<<"|____________________________|"<<endl<<endl;
		}
		
		
		
	}
	else if(option == 2)
	{
		
		if(size <= 1)
		{
			
			cout<<" ___________________________________________"<<endl;
			cout<<"|                                           |"<<endl;
			cout<<"|  You Cannot Completely Delete All Admins  |"<<endl;
			cout<<"|___________________________________________|"<<endl<<endl;
		}
		else
		{
				
				for(int i=0;i<size;i++)
				{
					cout<<i+1<<". "<<Admins[i].getName();
				}
			
			cout<<endl<<endl;
			
			cout<<"Enter The Admin Number That You Want To Remove : ";
			cin>>number;
			
			cout<<"---------------------------------------------------------"<<endl<<endl;

			
			
			if(number < 1 || number > size )
			{
				
				number = number - 1;
					
					for(int i=number;i<size-1;i++)
					{
						Admins[i] = Admins[i+1];
					}
					
					size--;
					
					cout<<" _________________________________"<<endl;
					cout<<"|                                 |"<<endl;
					cout<<"|   Admin Removed Successfully    |"<<endl;
					cout<<"|_________________________________|"<<endl<<endl;
			}
			else
			{
				
				cout<<" __________________"<<endl;
				cout<<"|                  |"<<endl;
				cout<<"|   Wrong Option   |"<<endl;
				cout<<"|__________________|"<<endl<<endl;
			}
			
		}
		
	}
	else if(option == 3)
	{
		for(int i=0;i<size;i++)
		{
			cout<<i+1<<". "<<Admins[i].getName()<<endl;
		}
		cout<<endl<<endl;
		
		cout<<"Enter The Admin's Number That You Want To Change Whose Details : ";
		cin>>number;
		
		cout<<"---------------------------------------------------------"<<endl<<endl;

		
		if(number <= 1 || number >= size ){
			
			number = number - 1;
				
				cout<<"Enter The New Name : ";
				fflush(stdin);
				getline(cin , name);
				
				cout<<"---------------------------------------------------------"<<endl<<endl;

				
				cout<<"Enter The New Password : ";
				fflush(stdin);
				getline(cin , password);
				
				cout<<"---------------------------------------------------------"<<endl<<endl;

				
				Admins[number].setDetails(name , password);
		}
		else
		{
			
			cout<<" _________________"<<endl;
			cout<<"|                 |"<<endl;
			cout<<"|  Wrong Option   |"<<endl;
			cout<<"|_________________|"<<endl<<endl;
		}
	}
	else if(option == 4)
	{
		for(int i=0;i<size;i++)
		{
			cout<<i+1<<". Name : "<<Admins[i].getName()<<endl;
			cout<<"  Password : "<<Admins[i].getPassword()<<endl;
			
			cout<<"---------------------------------------------------------"<<endl<<endl;

		}
	}
	else if(option == 5)
	{
		
	}
	else
	{
		
		cout<<" __________________"<<endl;
		cout<<"|                  |"<<endl;
		cout<<"|   Wrong Option   |"<<endl;
		cout<<"|__________________|"<<endl<<endl;
	}

	return size;
}


int AdminPowers(ItemsDetails *&ShoppingMall ,  int size , Admin *&Admins , int sizeOfAdmin){

	int menuOption;
	string ID;
	string name;
	float price;
	string description;
	char yesno;
	int counter;

	cout<<" _____________________________"<<endl;
	cout<<"|                             |"<<endl;
	cout<<"|  1. Edit Admins             |"<<endl;
	cout<<"|  2. Edit Sections Of Mall   |"<<endl;
	cout<<"|  3. Back                    |"<<endl;
	cout<<"|_____________________________|"<<endl<<endl;
	cout<<"Enter Your Option : ";
	cin>>menuOption;
	
	cout<<"---------------------------------------------------------"<<endl<<endl;

	
	if(menuOption == 1)
	{		
			sizeOfAdmin = adminsEditing( Admins , sizeOfAdmin);
	}
	else if(menuOption == 2)
	{
		if(size > 1)
		{
			cout<<" ___________________________________________________________"<<endl;
			cout<<"|                                                           |"<<endl;
			cout<<"|  The Shopping Mall Has The Following Sections Till Now :- |"<<endl;
			cout<<"|___________________________________________________________|"<<endl<<endl;
			
			for(int i=0;i<size;i++){
			cout<<i+1<<". "<<ShoppingMall[i].getSectionName()<<endl;
			
			cout<<"---------------------------------------------------------"<<endl<<endl;
			
			}
			
			int sectionsOption;
			
			cout<<"Select The Option In Which You Want To Edit : ";
			cin>>sectionsOption;
			
			cout<<"---------------------------------------------------------"<<endl<<endl;
			
				if(sectionsOption < 1 || sectionsOption > size)
				{
					cout<<" ___________________________"<<endl;
					cout<<"|                           |"<<endl;
					cout<<"|  Wrong Option Selection   |"<<endl;
					cout<<"|___________________________|"<<endl<<endl;
				}
				else
				{
						do{
								if(menuOption != -1)
								{
										cout<<"You Are Accessing The "<<ShoppingMall[sectionsOption-1].getSectionName()<<" Section"<<endl;
										
										cout<<"---------------------------------------------------------"<<endl<<endl;
										
										
										menuOption = adminEditingMenu();
										
										if(menuOption == 1)
										{									
											cout<<"Enter Product ID : ";
											fflush(stdin);
											getline(cin , ID);
											
											cout<<"---------------------------------------------------------"<<endl<<endl;
											
											int counter = 0;
											
											for(int i=0;i<size;i++)
											{
												for(int j=0;j<ShoppingMall[i].itemsID.getSize();j++)
												{
													if(ID == ShoppingMall[i].itemsID.returnSerialNum(j))
													{
														counter++;
													}
												}
											}

											if(counter == 0)
											{
												cout<<"Enter Product Name : ";
												fflush(stdin);
												getline(cin , name);
												
												cout<<"---------------------------------------------------------"<<endl<<endl;
												
												int counter2 = 0;
											
												for(int i=0;i<size;i++)
												{
													for(int j=0;j<ShoppingMall[i].itemsNames.getSize();j++)
													{
														if(name == ShoppingMall[i].itemsNames.returnSerialNum(j))
														{
															counter2++;
														}
													}
												}
												
												if(counter2 == 0)
												{
													
													cout<<"Enter Product Description : ";
													fflush(stdin);
													getline(cin , description);
													
													cout<<"---------------------------------------------------------"<<endl<<endl;
													
													cout<<"Enter Product Price : ";
													cin>>price;
													cout<<"---------------------------------------------------------"<<endl<<endl;
													ShoppingMall[sectionsOption-1].addItem(ID, name, description , price);
													
												}
												else
												{
													cout<<endl<<endl;
													
													cout<<" _______________________"<<endl;
													cout<<"|                       |"<<endl;
													cout<<"|   Name Already Exist  |"<<endl;
													cout<<"|_______________________|"<<endl<<endl;
												}	
											}
											else
											{
												    cout<<" ________________________________"<<endl;
													cout<<"|                                |"<<endl;
													cout<<"|   Serial Number Already Exist  |"<<endl;
													cout<<"|________________________________|"<<endl<<endl;
											}	
										}
										else if(menuOption == 2)
										{
											cout<<"Enter Product Serial Number : ";
											fflush(stdin);
											getline(cin , ID);
											
											cout<<"---------------------------------------------------------"<<endl<<endl;
											
											ShoppingMall[sectionsOption-1].removeItem(ID);											
										}
										else if(menuOption == 3)
										{
											
											ShoppingMall[sectionsOption-1].printAll();
										}
										else if(menuOption == 4)
										{
											cout<<"Enter Product Serial Number : ";
											fflush(stdin);
											getline(cin , ID);
											
										
											
											
											ShoppingMall[sectionsOption-1].printProductDetailsByID(ID);
											
											
											cout<<"---------------------------------------------------------"<<endl<<endl;
										}
										else if(menuOption == 5)
										{
											break;
										}
										else 
										{
											cout<<" _________________________________"<<endl;
											cout<<"|                                 |"<<endl;
											cout<<"|           Wrong Option          |"<<endl;
											cout<<"|_________________________________|"<<endl<<endl;
										}	
								}		
							}while(menuOption != 5);	
				}
			}
			else
			{	
				cout<<" _________________________________"<<endl;
				cout<<"|                                 |"<<endl;
				cout<<"|    No Sections Added Till Now   |"<<endl;
				cout<<"|_________________________________|"<<endl<<endl;
			}
		
	}
	else if(menuOption == 3)
	{
		
	}
	else{
		        cout<<" _________________________________"<<endl;
				cout<<"|                                 |"<<endl;
				cout<<"|           Wrong Option          |"<<endl;
				cout<<"|_________________________________|"<<endl<<endl;
	}
		
	cout<<endl<<endl;
	
	return sizeOfAdmin;

}


int CartDetails(ItemsDetails *&ShoppingMall , int size , DynamicStringArrayForCart *&Cart){
	
	string serialNum;
	float totalPrice = 0;
	int choice;
	int counter = 0;
	
	if(Cart->getSize() == 0)
	{
		cout<<" ___________________________________________"<<endl;
		cout<<"|                                           |"<<endl;
		cout<<"|    Cart Is Empty Add Some Items First     |"<<endl;
		cout<<"|___________________________________________|"<<endl<<endl;
	}
	else
	{
			
			
		
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<Cart->getSize(); j++)
			{

				serialNum = Cart->returnSerialNum(j);
				
				ShoppingMall[i].printProductDetailsByID(serialNum);
				totalPrice = totalPrice + ShoppingMall[i].getPriceOfProductByID(serialNum);
				
			}
		}

		cout<<endl<<endl;
		cout<<"Total Price Is : "<<totalPrice<<endl<<endl;
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		cout<<endl<<endl;
		cout<<" ________________________________"<<endl;
		cout<<"|                                |"<<endl;
		cout<<"|  1. Remove An Item From Cart   |"<<endl;
		cout<<"|     2. Move To Check Out       |"<<endl;
		cout<<"|________________________________|"<<endl;
		
		cout<<"Enter Your Option : ";
		cin>>choice;
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
	
	
		if(choice == 1)
		{
			cout<<"Enter The Serial Number Of The Product That You Want To Remove : ";
			fflush(stdin);
			getline(cin , serialNum);
			
			cout<<"---------------------------------------------------------"<<endl<<endl;
			
			
			for(int i=0;i<Cart->getSize();i++){
				if(serialNum == Cart->returnSerialNum(i));
				counter++;
			}
			
			if(counter != 0)
			{
				for(int i=0;i<Cart->getSize();i++)
				{
					if(serialNum == Cart->returnSerialNum(i))
					{
						Cart->remove(i+1);
						
						for(int j=0; j<size; j++)
						{
							totalPrice = totalPrice - ShoppingMall[j].getPriceOfProductByID(serialNum);	
						}
					}
				}		
			}
			else
			{
				
				cout<<" ________________________"<<endl;
				cout<<"|                        |"<<endl;
				cout<<"|  Wrong Serial Number!  |"<<endl;
				cout<<"|________________________|"<<endl<<endl;
			}
			
			
		}
		else if(choice == 2)
		{
			
			cout<<"---------------------------------------------------------"<<endl<<endl;
			
			cout<<"Please Pay : "<<totalPrice<<" At Check Out"<<endl<<endl;
			cout<<"Thank You For Shopping With Us"<<endl<<endl;
			
			cout<<"---------------------------------------------------------"<<endl<<endl;
			
			int returningtomain = 0;
			
			return 0;
		}
		else
		{
			cout<<"Wrong Input"<<endl;
		}
		
	}
	
	return -1;
	
}


void BuyerControls(ItemsDetails *&ShoppingMall, int size , DynamicStringArrayForCart *Cart){
	
	int optionMenu;
	int counter=0;
	bool returnSerialNum;
	string serialNum;
	char yesno;
	
	if(size == 0)
	{
		cout<<" _____________________________________________________"<<endl;
		cout<<"|                                                     |"<<endl;
		cout<<"|   We Dont Have Any Products Yet Check Back Later    |"<<endl;
		cout<<"|_____________________________________________________|"<<endl<<endl;
	}
	else
	{
		cout<<" _________________________________________________"<<endl;
		cout<<"|                                                 |"<<endl;
		cout<<"|          Welcome To Our Shopping Mall           |"<<endl;
		cout<<"|_________________________________________________|"<<endl<<endl;
		
		cout<<" __________________________________________________"<<endl;
		cout<<"|                                                  |"<<endl;
		cout<<"|    We Have The Following Categories Till Now     |"<<endl;
		cout<<"|__________________________________________________|"<<endl<<endl;

		do{
			
			counter = 0;
			
			for(int i=0;i<size;i++)
			{
				cout<<i+1<<" "<<ShoppingMall[i].getSectionName()<<endl;
				counter++;
			}
			
			counter++;
			
			cout<<endl;
			
			cout<<counter<<". Edit Items In Cart"<<endl<<endl;
			
			cout<<counter+1<<". Back"<<endl<<endl;
			
			
			cout<<"---------------------------------------------------------"<<endl<<endl;
			
			cout<<"Enter Your Option : ";
			cin>>optionMenu;
			
			char optionitem;
			
				if(optionMenu > 0 && optionMenu <= size )
				{			
					do{
					
					
						cout<<"---------------------------------------------------------"<<endl<<endl;
					
						cout<<"We Have The Following Products In The "<<ShoppingMall[optionMenu-1].getSectionName()<<" Section :-"<<endl<<endl;
							
							ShoppingMall[optionMenu-1].printAll();
							
						
							
							cout<<endl;
							
							cout<<"Enter The Serial No. Of The Product That You Want To Add To Cart : ";
							fflush(stdin);
							getline(cin , serialNum);
							
							cout<<"---------------------------------------------------------"<<endl<<endl;
							
							returnSerialNum = ShoppingMall[optionMenu-1].itemsID.checkSerialNum(serialNum);
							
							
							if(returnSerialNum == true)
							{
								Cart->add(serialNum);
								
								
								cout<<endl;
								
								cout<<" _______________________"<<endl;
								cout<<"|                       |"<<endl;
								cout<<"|   Item Added To Cart  |"<<endl;
								cout<<"|_______________________|"<<endl<<endl;
							}
							else
							{
								cout<<" _____________________________________"<<endl;
								cout<<"|                                     |"<<endl;
								cout<<"| Wrong Serial Number Of The Product  |"<<endl;
								cout<<"|_____________________________________|"<<endl<<endl;
							}
							
							
							
							cout<<"Do You Want To Add Another Item ? : y/n : ";
							cin>>optionitem;
							
							cout<<"---------------------------------------------------------"<<endl<<endl;
							
						}while(optionitem == 'y' || optionitem == 'Y');
						
				}
				else if(optionMenu ==  counter)
				{
					
					int checking = CartDetails(ShoppingMall , size , Cart);
					
					if(checking == 0)
					{
						break;
					}
				}
				else if(optionMenu == counter+1)
				{
					break;
				}
				else
				{
					cout<<" ________________"<<endl;
					cout<<"|                |"<<endl;
					cout<<"|  Wrong Option  |"<<endl;
					cout<<"|________________|"<<endl<<endl;
				}

		}while(optionMenu != counter+1);
	
	}	
	
	
}


int shoppingMallSections( ItemsDetails *aShoppingMall , int size){
	int option;
	string name;
	int number;
	
	
	cout<<" ______________________________"<<endl;
	cout<<"|                              |"<<endl;
	cout<<"|      1. Add A Section        |"<<endl;
	cout<<"|     2. Remove A Section      |"<<endl;
	cout<<"|     3. Rename A Section      |"<<endl;
	cout<<"|     4. Show All Sections     |"<<endl;
	cout<<"|           5. Back            |"<<endl;
	cout<<"|______________________________|"<<endl<<endl;
	
	cout<<"Enter Your Option : ";
	cin>>option;
	
	cout<<"---------------------------------------------------------"<<endl<<endl;
	
	if(option == 1)
	{
		cout<<"Enter The Name Of The New Section : ";
		fflush(stdin);
		getline(cin , name);
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		int counter = 0;
		
		for(int i=0;i<size;i++)
		{			
			if(name == aShoppingMall[i].getSectionName())
			{
				counter++;
			}
							
		}
						
		if(counter == 0)
		{
			ItemsDetails *newShoppingMall = new ItemsDetails [size + 1];
		
			for(int i=0;i<size;i++)
			{
				newShoppingMall[i] = aShoppingMall[i];
			}
			
			newShoppingMall[size].setSectionName(name);
			
			size++;
			
			delete [] aShoppingMall;
			
			aShoppingMall = newShoppingMall; 
			
			
			cout<<" ______________________________"<<endl;
			cout<<"|                              |"<<endl;
			cout<<"|  Section Added Successfully  |"<<endl;
			cout<<"|______________________________|"<<endl<<endl;
				
		}
		else
		{
			cout<<" ______________________________"<<endl;
			cout<<"|                              |"<<endl;
			cout<<"|    Section Already Exists    |"<<endl;
			cout<<"|______________________________|"<<endl<<endl;
		}
	}
	else if(option == 2)
	{
		
		for(int i=0;i<size;i++)
		{
			cout<<i+1<<". "<<aShoppingMall[i].getSectionName()<<endl;
		}
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		cout<<endl<<endl;
		
		cout<<"Enter The Section Number That You Want To Remove : ";
		cin>>number;
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		if(number >= 1 || number < size )
		{
			
			number = number - 1;
				
				for(int i=number;i<size-1;i++)
				{
					aShoppingMall[i] = aShoppingMall[i+1];
				}
				
				size--;
				
				cout<<" ___________________________________"<<endl;
				cout<<"|                                   |"<<endl;
				cout<<"|    Section Deleted Successfully   |"<<endl;
				cout<<"|___________________________________|"<<endl<<endl;
		}
		else
		{
			cout<<" ________________"<<endl;
			cout<<"|                |"<<endl;
			cout<<"|  Wrong Option  |"<<endl;
			cout<<"|________________|"<<endl<<endl;
		}
	}
	else if(option == 3)
	{
		for(int i=0;i<size;i++)\
		{
			cout<<i+1<<". "<<aShoppingMall[i].getSectionName()<<endl;
		}
		cout<<endl<<endl;
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		cout<<"Enter The Section Number That You Want To Rename : ";
		cin>>number;
		
		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		if(number <= 1 || number >= size )
		{
			
			number = number - 1;
				
				cout<<"Enter New Section Name : ";
				fflush(stdin);
				getline(cin , name);
				
				cout<<"---------------------------------------------------------"<<endl<<endl;
				
				aShoppingMall[number].setSectionName(name);
		}
		else
		{
			cout<<" ________________"<<endl;
			cout<<"|                |"<<endl;
			cout<<"|  Wrong Option  |"<<endl;
			cout<<"|________________|"<<endl<<endl;
		}
	}
	else if(option == 4)
	{
		for(int i=0;i<size;i++)
		{
			cout<<i+1<<". "<<aShoppingMall[i].getSectionName()<<endl;
		}
	}
	else if(option == 5)
	{
		
	}
	else
	{
			cout<<" ________________"<<endl;
			cout<<"|                |"<<endl;
			cout<<"|  Wrong Option  |"<<endl;
			cout<<"|________________|"<<endl<<endl;
	}	
	return size;
}


int enterDefaultSectionsAndProducts(ItemsDetails *&ShoppingMall , int size){
	
	ItemsDetails *newShoppingMall = new ItemsDetails [size + 6];
		
			for(int i=0;i<size;i++)
			{
				newShoppingMall[i] = ShoppingMall[i];
			}
			
			newShoppingMall[size].setSectionName("Clothing And Apparel");
			
			size++;
			
			delete [] ShoppingMall;
			
			ShoppingMall = newShoppingMall; 

	ShoppingMall[0].setSectionName("Clothing And Apparel");
	ShoppingMall[0].addItem("CL01","T-Shirt","A comfortable and stylish cotton t-shirt for everyday wear",2000);
	ShoppingMall[0].addItem("CL02","Jeans","Durable denim pants with a classic style",5000);
	ShoppingMall[0].addItem("CL03", "Hoodie", "A warm and cozy hooded sweatshirt for casual occasions", 3500);
	ShoppingMall[0].addItem("CL04", "Dress", "A fashionable and elegant dress for formal events", 8000);
	ShoppingMall[0].addItem("CL05", "Sneakers", "Comfortable and stylish shoes for daily use", 6000);
	ShoppingMall[0].addItem("CL06", "Jacket", "A trendy and warm jacket for cooler weather", 10000);
	ShoppingMall[0].addItem("CL07", "Skirt", "A feminine and versatile skirt for various occasions", 4000);
	ShoppingMall[0].addItem("CL08", "Blouse", "A stylish and lightweight top for a professional look", 3000);
	ShoppingMall[0].addItem("CL10", "Sweatpants", "Cozy and comfortable pants for lounging around the house", 3000);
	ShoppingMall[0].addItem("CL11", "Tank Top", "A sleeveless and lightweight top for hot weather", 1500);
	ShoppingMall[0].addItem("CL12", "Leggings", "Comfortable and stretchy pants for workouts or everyday wear", 3500);
	ShoppingMall[0].addItem("CL13", "Polo Shirt", "A classic and timeless shirt for a smart casual look", 4500);
	ShoppingMall[0].addItem("CL14", "Sweater", "A warm and cozy knit sweater for cooler weather", 5500);
	ShoppingMall[0].addItem("CL15", "Jumpsuit", "A fashionable and trendy one-piece outfit for various occasions", 7000);
	ShoppingMall[0].addItem("CL16", "Scarf", "A stylish and warm accessory for cooler weather", 2000);
	ShoppingMall[0].addItem("CL17", "Belt", "A functional and stylish accessory to complete any outfit", 2500);
	ShoppingMall[0].addItem("CL18", "Sunglasses", "Stylish and practical sunglasses to protect your eyes from the sun", 5000);
	ShoppingMall[0].addItem("CL19", "Hat", "A trendy and fashionable accessory to protect your head from the sun", 3000);
	ShoppingMall[0].addItem("CL20", "Socks", "Comfortable and practical socks for everyday use", 1000);
	
	ShoppingMall[1].setSectionName("Electronics");
	ShoppingMall[1].addItem("EL01","Laptop","A powerful and versatile computer for work or entertainment",100000);
	ShoppingMall[1].addItem("EL02", "Smartphone", "A high-performance mobile device with various features", 80000);
	ShoppingMall[1].addItem("EL03", "Tablet", "A portable and convenient device for browsing the web or reading books", 40000);
	ShoppingMall[1].addItem("EL04", "Television", "A large and high-quality screen for watching movies or TV shows", 120000);
	ShoppingMall[1].addItem("EL05", "Headphones", "High-quality and comfortable headphones for listening to music or podcasts", 15000);
	ShoppingMall[1].addItem("EL06", "Camera", "A high-resolution and versatile camera for capturing beautiful photos and videos", 80000);
	ShoppingMall[1].addItem("EL07", "Smartwatch", "A stylish and functional device for tracking fitness or staying connected", 30000);
	ShoppingMall[1].addItem("EL08", "Gaming Console", "A powerful and entertaining gaming system for playing video games", 50000);
	ShoppingMall[1].addItem("EL09", "Desktop Computer", "A powerful and reliable computer for work or gaming", 120000);
	ShoppingMall[1].addItem("EL10", "External Hard Drive", "A reliable and spacious device for backing up important data", 10000);
	ShoppingMall[1].addItem("EL11", "Printer", "A reliable and high-quality printer for printing documents or photos", 15000);
	ShoppingMall[1].addItem("EL12", "Wi-Fi Router", "A powerful and reliable router for fast and stable internet connection", 10000);
	ShoppingMall[1].addItem("EL13", "Smart Speaker", "A stylish and powerful speaker with voice control and smart home features", 20000);
	ShoppingMall[1].addItem("EL14", "Fitness Tracker", "A convenient and functional device for tracking fitness and health goals", 10000);
	ShoppingMall[1].addItem("EL15", "Bluetooth Speaker", "A portable and wireless speaker for listening to music or podcasts on the go", 5000);
	ShoppingMall[1].addItem("EL16", "Virtual Reality Headset", "A immersive and entertaining device for experiencing virtual reality", 30000);
	ShoppingMall[1].addItem("EL17", "Wireless Earbuds" , "High-quality and convenient earbuds for listening to music or podcasts without cords" , 10000);
	ShoppingMall[1].addItem("EL18", "Smart Thermostat" , "A convenient and energy-saving device for controlling your home's temperature" , 25000);
	ShoppingMall[1].addItem("EL19", "Home Security Camera" , "A reliable and high-quality camera for monitoring your home's security" , 15000);
	ShoppingMall[1].addItem("EL20", "Electric ToothBrush" , "A convenient and effective toothbrush for achieving better oral hygiene" , 5000);
	
	ShoppingMall[2].setSectionName("Beauty And Personal Care");
	ShoppingMall[2].addItem("BP01" , "Shampoo" , " A high-quality and nourishing shampoo for healthy hair" , 1500);
	ShoppingMall[2].addItem("BP02", "Conditioner", "A nourishing and moisturizing conditioner for smooth and shiny hair", 15);
	ShoppingMall[2].addItem("BP03", "Body Wash", "A refreshing and hydrating body wash for clean and soft skin", 1000);
	ShoppingMall[2].addItem("BP04", "Facial Cleanser", "A gentle and effective cleanser for clear and healthy skin", 2000);
	ShoppingMall[2].addItem("BP05", "Moisturizer", "A hydrating and nourishing moisturizer for smooth and soft skin", 3000);
	ShoppingMall[2].addItem("BP06", "Face Mask", "A refreshing and rejuvenating mask for glowing and healthy skin", 2500);
	ShoppingMall[2].addItem("BP07", "Body Lotion", "A moisturizing and nourishing lotion for soft and smooth skin", 2000);
	ShoppingMall[2].addItem("BP08", "Deodorant", "An effective and long-lasting deodorant for staying fresh all day", 1000);
	ShoppingMall[2].addItem("BP09", "Perfume", "A luxurious and long-lasting perfume for a signature scent", 8000);
	ShoppingMall[2].addItem("BP10", "Nail Polish", "A high-quality and long-lasting nail polish for a pop of color", 800);
	ShoppingMall[2].addItem("BP11", "Lipstick", "A moisturizing and long-lasting lipstick for a bold and beautiful look", 2500);
	ShoppingMall[2].addItem("BP12", "Mascara", "A lengthening and volumizing mascara for dramatic and fluttery lashes", 2000);
	ShoppingMall[2].addItem("BP13", "Eyeliner", "A precise and long-lasting eyeliner for defining and accentuating the eyes", 1500);
	ShoppingMall[2].addItem("BP14", "Foundation", "A natural and long-lasting foundation for a flawless and even complexion", 4000);
	ShoppingMall[2].addItem("BP15", "Hair Styling Gel", "A high-quality and strong hold gel for creating various hairstyles", 1000);
	ShoppingMall[2].addItem("BP16", "Hair Spray", "A long-lasting and strong hold hair spray for all hair types", 1500);
	ShoppingMall[2].addItem("BP17", "Hair Brush", "A high-quality and durable hair brush for tangle-free and smooth hair", 2000);
	ShoppingMall[2].addItem("BP18", "Hair Dryer", "A powerful and efficient hair dryer for quick and easy hair styling", 5000);
	ShoppingMall[2].addItem("BP19", "Razor", "A high-quality and long-lasting razor for a smooth and close shave", 1500);
	ShoppingMall[2].addItem("BP20", "Teeth Whitening Kit", "A convenient and effective kit for achieving a brighter and whiter smile", 3000);
	
	
	ShoppingMall[3].setSectionName("Home Decor");
	ShoppingMall[3].addItem("HD01", "Bedding Set" , "A comfortable and stylish bedding set for a good night's sleep" , 10000);
	ShoppingMall[3].addItem("HD02", "Throw Pillow", "A soft and decorative pillow for adding a pop of color and texture to your sofa or bed", 2000);
	ShoppingMall[3].addItem("HD03", "Wall Art", "A beautiful and unique artwork for decorating your walls", 5000);
	ShoppingMall[3].addItem("HD04", "Curtains", "A stylish and functional set of curtains for privacy and light control", 5000);
	ShoppingMall[3].addItem("HD05", "Area Rug", "A soft and durable rug for adding warmth and comfort to your floors", 10000);
	ShoppingMall[3].addItem("HD06", "Table Lamp", "A stylish and functional lamp for adding light and ambiance to your room", 4000);
	ShoppingMall[3].addItem("HD07", "Floor Lamp", "A tall and stylish lamp for adding light and ambiance to your room", 8000);
	ShoppingMall[3].addItem("HD08", "Wall Mirror", "A beautiful and functional mirror for adding depth and style to your room", 7000);
	ShoppingMall[3].addItem("HD09", "Throw Blanket", "A soft and cozy blanket for adding warmth and comfort to your sofa or bed", 3000);
	ShoppingMall[3].addItem("HD10", "Decorative Vase", "A beautiful and unique vase for displaying flowers or decorative items", 4000);
	ShoppingMall[3].addItem("HD11", "Candle Holder", "A stylish and functional candle holder for creating a cozy and relaxing ambiance", 2000);
	ShoppingMall[3].addItem("HD12", "Picture Frame", "A stylish and functional picture frame for displaying your favorite photos", 2000);
	ShoppingMall[3].addItem("HD13", "Wall Clock", "A stylish and functional clock for keeping track of time and adding style to your walls", 3000);
	ShoppingMall[3].addItem("HD14", "Decorative Tray", "A stylish and functional tray for organizing and displaying small items", 2500);
	ShoppingMall[3].addItem("HD15", "Bookends", "A stylish and functional bookend for organizing and displaying your favorite books", 2000);
	ShoppingMall[3].addItem("HD16", "Storage Bins", "A set of durable and functional storage bins for organizing your items", 4000);
	ShoppingMall[3].addItem("HD17", "Wall Shelf", "A stylish and functional wall shelf for displaying and organizing your items", 5000);
	ShoppingMall[3].addItem("HD18", "Desk Organizer", "A stylish and functional desk organizer for keeping your workspace neat and organized", 3000);
	ShoppingMall[3].addItem("HD19", "Throw Rug", "A soft and cozy rug for adding warmth and comfort to your feet", 2500);
	ShoppingMall[3].addItem("HD20", "Wall Decor", "A unique and stylish wall decor for adding character and style to your room", 6000);
	
	ShoppingMall[4].setSectionName("Food and Beverage");
	ShoppingMall[4].addItem("FB01", "Coffee Beans" , "A high-quality and flavorful coffee beans for brewing your own coffee " , 1500);
	ShoppingMall[4].addItem("FB02", "Tea Bags", "A high-quality and flavorful tea bags for a relaxing and soothing drink", 1000);
	ShoppingMall[4].addItem("FB03", "Chocolate Bars", "A high-quality and delicious chocolate bars for a sweet treat", 500);
	ShoppingMall[4].addItem("FB04", "Chips", "A crispy and flavorful chips for a satisfying snack", 300);
	ShoppingMall[4].addItem("FB05", "Cookies", "A soft and flavorful cookies for a sweet and satisfying treat", 500);
	ShoppingMall[4].addItem("FB06", "Energy Bars", "A high-protein and nutritious energy bars for a quick and convenient snack", 200);
	ShoppingMall[4].addItem("FB07", "Trail Mix", "A delicious and healthy trail mixes for a satisfying snack on the go", 500);
	ShoppingMall[4].addItem("FB08", "Nuts", "A high-quality and nutritious nuts for a healthy and satisfying snack", 1000);
	ShoppingMall[4].addItem("FB09", "Candy" , "A variety of sweet and delicious candies for a fun and indulgent treat" , 200);
	ShoppingMall[4].addItem("FB10", "Soda" , "A refreshing and flavorful sodas for a satisfying and fizzy drink" , 1500);
	ShoppingMall[4].addItem("FB11", "Juice" , "A refreshing and flavorful juices for a healthy and delicious drink" , 300);
	ShoppingMall[4].addItem("FB12", "Water" , "A high-quality and refreshing bottled water for staying hydrated" , 100);
	ShoppingMall[4].addItem("FB13", "Beer", "A high-quality and flavorful beers for a satisfying and refreshing drink", 500);
	ShoppingMall[4].addItem("FB14", "Wine", "A high-quality and flavorful wines for a relaxing and enjoyable drink", 2000);
	ShoppingMall[4].addItem("FB15", "Liquor", "A high-quality and flavorful liquors for mixing and enjoying cocktails", 3000);
	ShoppingMall[4].addItem("FB16", "Cheese", "A delicious and high-quality cheeses for a sophisticated and indulgent snack", 1500);
	ShoppingMall[4].addItem("FB17", "Deli Meats", "A high-quality and flavorful deli meats for a satisfying and savory sandwich", 1000);
	ShoppingMall[4].addItem("FB18", "Bread", "A fresh and flavorful bread for a satisfying and delicious sandwich", 500);
	ShoppingMall[4].addItem("FB19", "Pasta", "A high-quality and flavorful pastas for a satisfying and hearty meal", 1000);
	ShoppingMall[4].addItem("FB20", "Sauces", "A Pack of Every Sauce Required and flavorful sauces for adding extra flavor and depth to your meals", 500);
	
	ShoppingMall[5].setSectionName("Other Electronics");
	ShoppingMall[5].addItem("OE01" , "Laptop" , "A high-performance and portable laptop for work and entertainment" , 100000);
	ShoppingMall[5].addItem("OL02", "Desktop Computer", "A powerful and versatile desktop computer for work and gaming", 150000);
	ShoppingMall[5].addItem("OL03", "Tablet", "A portable and versatile tablet for entertainment and productivity", 50000);
	ShoppingMall[5].addItem("OL04", "Smartphone", "A high-quality and powerful smartphone for communication and entertainment", 80000);
	ShoppingMall[5].addItem("OL05", "TV", "A high-definition and large-screen TV for watching your favorite shows and movies", 100000);
	ShoppingMall[5].addItem("OL06", "Gaming Console", "A powerful and immersive gaming console for playing your favorite video games", 50000);
	ShoppingMall[5].addItem("OL07", "Headphones", "A high-quality and comfortable headphones for listening to music and podcasts", 10000);
	ShoppingMall[5].addItem("OL08", "Wireless Earbuds", "A portable and convenient wireless earbuds for listening to music and podcasts on the go", 15000);
	ShoppingMall[5].addItem("OL09", "Smart Watch", "A versatile and smart watch for tracking fitness and staying connected", 30000);
	ShoppingMall[5].addItem("OL10", "Fitness Tracker", "A high-quality and accurate fitness tracker for monitoring your activity levels", 10000);
	ShoppingMall[5].addItem("OL11", "Camera", "A high-quality and versatile camera for capturing your favorite moments", 10000);
	ShoppingMall[5].addItem("OL12", "Bluetooth Speaker", "A high-quality and portable Bluetooth speaker for listening to music and podcasts", 15000);
	ShoppingMall[5].addItem("OL13", "External Hard Drive", "A high-capacity and reliable external hard drive for storing your important files and data", 10000);
	ShoppingMall[5].addItem("OL14", "Printer", "A high-quality and versatile printer for printing documents and photos", 20000);
	ShoppingMall[5].addItem("OL15", "Projector", "A high-definition and portable projector for watching movies and presentations", 50000);
	ShoppingMall[5].addItem("OL16", "Monitor", "A high-quality and versatile monitor for work and entertainment", 30000);
	ShoppingMall[5].addItem("OL17", "Keyboard", "A high-quality and comfortable keyboard for typing and gaming", 5000);
	ShoppingMall[5].addItem("OL18", "Mouse", "A high-quality and responsive mouse for navigating and gaming", 3000);
	ShoppingMall[5].addItem("OL19", "Router", "A high-quality and reliable router for connecting to the internet", 10000);
	ShoppingMall[5].addItem("OL20", "Webcam", "A high-quality and versatile webcam for video conferencing and streaming", 5000);

	return 6;
}


int main(){
	int sizeOfAdmins = 1;
	Admin *Admins = new Admin [sizeOfAdmins];
	Admins[0].setDetails("admin","admin");
	int check;
	char yesno;
	char option2;
	char defaultOption;
	int iffordefaultoptions = 1;
	
	int sizeOfShoppingMall = 0;
	ItemsDetails *aShoppingMall = new ItemsDetails[sizeOfShoppingMall];
	
	int option, secondryOption;
	
	do{
	
		
		
		cout<<" ____________________"<<endl;
		cout<<"|                    |"<<endl;
		cout<<"|      1. Buyer      |"<<endl;
		cout<<"|      2. Admin      |"<<endl;
		cout<<"|      3. Exit       |"<<endl;
		cout<<"|____________________|"<<endl<<endl;
		
		cout<<"Enter Your Option : ";
		cin>>option;
		
//		cout<<"---------------------------------------------------------"<<endl<<endl;
		
		if(option == 1)
		{
			DynamicStringArrayForCart Cart;
			BuyerControls(aShoppingMall, sizeOfShoppingMall , &Cart);
			
		}
		else if(option == 2)
		{
			
			check = checkAdminDetails(Admins , sizeOfAdmins);
			
			if(check == 1)
			{
				
				
				if(iffordefaultoptions == 1)
				{
					
					cout<<"Do You Want To Insert Default Sections And Default Products In Them ? : y/n : ";
					cin>>defaultOption;
					
					if(defaultOption == 'y' || defaultOption == 'Y'){
							sizeOfShoppingMall = enterDefaultSectionsAndProducts(aShoppingMall, sizeOfShoppingMall);
						}
					
					iffordefaultoptions = -1;
				}

				do{	
					cout<<"---------------------------------------------------------"<<endl<<endl;

					cout<<" ___________________________________________________________________"<<endl;
					cout<<"|                                                                   |"<<endl;
					cout<<"|                   1. To Edit Mall Sections                        |"<<endl;
					cout<<"|                   2. For Other Admin Powers                       |"<<endl;
					cout<<"|                           3. Back                                 |"<<endl;
					cout<<"|___________________________________________________________________|"<<endl<<endl;
					
					cout<<"Enter Your Option : ";
					cin>>secondryOption;
				
					cout<<"---------------------------------------------------------"<<endl<<endl;
				
					if(secondryOption == 1)
					{
						sizeOfShoppingMall = shoppingMallSections(aShoppingMall , sizeOfShoppingMall);
					}
					else if(secondryOption == 2)
					{
						sizeOfAdmins = AdminPowers(aShoppingMall , sizeOfShoppingMall , Admins , sizeOfAdmins);
					}
					else if(secondryOption == 3)
					{
						break;
					}
					else
					{
						cout<<" ________________"<<endl;
						cout<<"|                |"<<endl;
						cout<<"|  Wrong Option  |"<<endl;
						cout<<"|________________|"<<endl<<endl;
					}
				
				}while(secondryOption != 3);
			}
			else if(check == 3)
			{
				cout<<" _________________________________________________________________________"<<endl;
				cout<<"|              														     |"<<endl;
				cout<<"|  No Username Or Password Matched\nTry Again With The Right Credentials  |"<<endl;
				cout<<"|_________________________________________________________________________|"<<endl<<endl;			
			}
			
		}
		else if(option == 3)
		{
			break;
		}
		else
		{
			cout<<" ________________"<<endl;
			cout<<"|                |"<<endl;
			cout<<"|  Wrong Option  |"<<endl;
			cout<<"|________________|"<<endl<<endl;
		}
	}
	while(option != 3);
	
	cout << " ________________________________"<<endl;
	cout << "|                                |"<<endl;
	cout << "| Thanks for visiting our Mall   |"<<endl;
	cout << "|________________________________|"<<endl;

	return 0;
}