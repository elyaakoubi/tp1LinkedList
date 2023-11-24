using namespace std;

struct Product{
	string name;
	string ref;
	double price;
	
	Product(string name,string ref,double price){
		this->name=name;
		this->ref=ref;
		this->price=price;
	}
	
	display(){
		cout <<"-------------------------" << endl;
	   cout << this->name << endl;
	   cout << this->ref << endl;
	    cout << this->price << endl;
	cout <<"-------------------------" << endl;

	}
};






