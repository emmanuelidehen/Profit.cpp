// This program was written by Emmanuel Idehen, it's a make up program for program 6
// eidehen.cpp
//this program calculate your profit or loss from the sales of stock 
// This is program number 11 on page 402 of the textbook.




#include <iostream>
#include <cmath>
#include <string>


using namespace std;

// function prototype 
int totalprofit (int,int,int,int,int);

// main function 
int main ()
{
	int profit, salePrice, numberShare, salesCommision, purchasePrice, purchaseCommision;
	cout<<"Enter the number of shares "<<endl;// number of shares
	cin>> numberShare;

	cout<<"Enter the sales price per shares "<<endl;// sales price per share 
	cin>> salePrice;

	cout<<"Enter the sales commision paid "<<endl;//sales comission paid
	cin>> salesCommision;

	cout<<"Enter the purchase price per shares "<<endl;// purchase price per shares 
	cin>> purchasePrice;

	cout<<"Enter the purchase commision paid "<<endl;// purchase commision 
	cin>> purchaseCommision;
	
	profit= totalprofit (numberShare, salePrice, salesCommision, purchasePrice, purchaseCommision);// calling the function 
	cout<<"your profit is  "<< profit << endl;
    
	return 0;
}
// profit function 
int totalprofit (int a, int b, int c, int d, int e)
{
	
	int profit;
	profit= ((a*b)-c)-((a*d)+e);


	return profit;
}

/* test casses
Enter the number of shares
20000
Enter the sales price per shares
20
Enter the sales commision paid
89
Enter the purchase price per shares
290
Enter the purchase commision paid
22
your profit is  -5400111
Press any key to continue . . .




Enter the number of shares
2
Enter the sales price per shares
2000
Enter the sales commision paid
8
Enter the purchase price per shares
2
Enter the purchase commision paid
1
your profit is  3987
Press any key to continue . . .


*/