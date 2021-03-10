#include<iostream>
#include<cmath>


using namespace std;

double power(double &base);
double power(double &base, int &n );
void display(double &result);

int main(){
	int n;
	double base,result;
	char choice;
	cout<<"Give the base\n";
	cin>>base;
	cout<<"Do you want to specify the power? Y/N\n";
	cin>>choice;
	switch(choice){
		case 'Y': cout<<"Enter the power\n";
				  cin>>n;
				  result = power(base,n);
				  break;
		case 'N': result =power(base);
				  break;
		default :cout<<"Invalid input\n";
		}
	display(result);
	return 0;
	}

double power(double &base){
			return(pow(base,2));
			}
double power(double &base, int &n){
			return(pow(base,n));
			}
void display(double &result){
	cout<<" the output is "<<result;
	}
