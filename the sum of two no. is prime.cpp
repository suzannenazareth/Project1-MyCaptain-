#include <iostream>
using namespace std;

bool checkPrime(int n );
int main(){ 
	        int n , i;
	        bool flag = false;
	        
	        cout<<"enter a positive integer:" << endl;
	        cin>>n;
	        
	        
	        for (i=2; i <=n/2 ; ++i) {
	                if (checkPrime(i)){
	                	if (checkPrime(n-i)){ 
	                	cout << n <<" = "<<i << " + " << n-i << endl;
	                	flag = true;
						}
					}	
			}
			if (!flag){ 
	       cout <<n<<" cant be expressed as the sum of the two prime numbers."<< endl; 
	}
	return 0;
			
	}
//check prime number
bool checkPrime(int n){
	int i;
	bool isprime = true 
	
	//0 & 1 are not prime nubers
	;if(n == 0 || n == 1){
		isprime = false;
	}
	else{
		   for (i=2;i<n/2; ++i){ 
		   if(n%i==0){ 
		   ;isprime = false;
		   break;
		   
		   }
		   }
	}
	  
	return isprime;
}
