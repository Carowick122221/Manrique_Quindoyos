#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

#include "Project.h"

using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}
//1st
void Project::multiple_of_3_and_5()
{
    int i=0, sum=0;

    for (i=0; i<1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            sum=sum+i;
        }
    }
    cout << "The sum of the multiples (not exceeding 1000) of 3 and 5 is: " << sum << endl ;
}
//2nd
void Project::even_fibonacci()
{
    int first=1,second=2,sum=0;
    int evensum=2;

    while((first+second)<4000000)
    {
        sum=first+second;
        first=second;
        second=sum;

        if (sum%2==0)
        {
            evensum+=sum;
        }
    }
    cout << "The sum of all even numbers in the fibonacci series is: " << evensum <<endl;
}
//3rd
void Project::largest_prime_factor()
{
    long long int number = 600851475143;
    long long int halfNumber = number/2;
    long long int sum =1;
    long int digit=0;

    for(digit = 3; digit <= halfNumber; digit += 2)
    {
        if(number%digit == 0)
        {
            sum *=digit;
                if(sum == number)
                {
                    cout << "The largest prime factor of 600851475143 is: " << digit <<endl;
                    break;
                }
        }
    }
}
//4th
void Project::largest_palindrome_product()
{
    int biggestProduct = 0, val1=0, val2=0, thisProduct=0;

    for(val1=999; val1>=100; --val1)
        {
        for(val2=999; val2>=100; --val2)
        {
            thisProduct = val1 * val2;

            if(thisProduct > biggestProduct)
            {
                stringstream strProduct;
                string strProductReverse;

                strProduct << val1*val2;

                strProductReverse = strProduct.str();
                reverse(strProductReverse.begin(), strProductReverse.end());

                if(strProduct.str() == strProductReverse)
                {
                    biggestProduct = thisProduct;
                }
            }
        }
    }
    cout << "The largest palindromic product of two three-digit numbers is: " << biggestProduct << endl;
}
//5th
void Project::smallest_multiple()
{
    int num = 20, counter = 0;

    while(counter == 0)
    {
        if ((num%2) == 0 && (num%3) == 0 && (num%4) == 0    && (num%5) == 0 && (num%6) == 0
        && (num%7) == 0 && (num%8) == 0 && (num%9) == 0 && (num%10) == 0 && (num%11) == 0 && (num%12) ==0
        && (num%13) == 0 && (num%14) == 0 && (num%15) == 0 && (num%16) == 0 && (num%17) == 0 && (num%18)==0
        && (num%19) == 0    && (num%20) == 0)
        {
            counter =  1;
            cout<< "The smallest positive number that is divisible from 1 to 20 is: " << num <<endl;
        }
            num++;
    }
}
//6th
void Project::sum_square_diff()
{
    int sum1=0, sum2=0, i=0, difference=0;

    for (i=0;i<=100;i++)
    {
        sum1 += i;
        sum2 += i*i;
    }
        sum1 = sum1*sum1;
        difference = sum1 - sum2;
        cout << "The square of the sum of 100 natural numbers is: " << sum1 <<endl;
        cout << "The sum of the square of 100 natural numbers is: " << sum2 <<endl;
        cout << "The difference : " << difference <<endl;
}


//7th
int Project::onethousandfirst_prime()
{
  int j=0, i=0;
  long long int p=0;
  long long int r=0;

  while(r!=10001)
  {
     j=j+1;
     i=j;

     while(i!=0)
     {
        if(j%i==0)
        {
            p++;
        }
     i--;
     }

     if(p==2)
     {
        r++;
        cout<<r<<"\t";  //serial number of the prime number.optional
        cout<<j<<"\t";// displays all prime numbers till 10001.optional...bagal neto kasi hine-check nya pa isa isa...kaya sana mas maganda kung i-di-display din natin ung mga aun...
     }
     if(r==10001)
     {
     cout<<"\nThe 10001th prime number is:"<<j;
     }
     p=0;
     }
  return 0;
}

//8th
void::Project::largest_product_in_series()
{
    int index = 0;
    int numbers[1000];
    int temp = 1;
    int max_start= 0;
    int maxProduct = 0;
    ifstream number_file( "number.txt" );
    int i = 0;

    while(!number_file.eof())
    {
        if (number_file.peek()=='\n')
        {
            number_file.get();
        }
        else
        {
            numbers[i++] = number_file.get() - '0';
        }
   }
   number_file.close();

   i = 0;
   int j;

   while(i <= ( 1000- 5))
   {
        for ( j = 0; j < 5; j++ )
        {
            temp *= numbers[ i + j ];
        }
        if ( temp > maxProduct )
        {
            maxProduct = temp;
            max_start = i;
        }
        i++;
        temp = 1;
   }
   cout << "The greatest product of the five consecutive digits is: " << maxProduct <<endl;
   cout << "It starts at: " << max_start<<endl;
   cout << "The numbers are: ";

   for (i=0;i<5;i++)
   {
        cout << numbers[ max_start + i ] << " ";
   }
        cout <<endl;
}

int Project::checkTriplet(int a, int b, int c)
{
    if ((a * a) + (b* b) == (c* c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Project::checkAdd(int a, int b, int c, int num)
{
    num = 1000;

    if ((a + b + c) == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//9th
void Project::special_pytho_triplet()
{
    Project proj;
    int a = 1;
    int b = 1;
    int c = 1;
    char checkFound= 0;

    for (a=1;(a < 1000);a++)
    {
        for (b=1;(b < 1000);b++)
        {
            for (c=1;(c < 1000);c++)
            {
                if (proj.checkAdd( a, b, c, 1000))
                {
                    if (proj.checkTriplet( a, b, c ))
                    {
                        checkFound= 1;
                        break;
                    }
                }
            }
        if (checkFound)
        {
            break;
        }

        }

    if (checkFound)
    {
        break;
    }

    }
    if (checkFound)
    {
        cout << "The triple is:\n a = " << a << "\n b = " << b << "\n c = " << c  <<endl;
        cout << "The product of a, b & c is: " << (a * b * c) <<endl;
    }
    else
    {
        cout << "The triple is = " << 1000 << " was not found!" <<endl;
    }
}
//10th
void Project::summation_of_primes()
{
    int num=1;
	unsigned long long int total=2;
	int divisor;
    bool prime = true ;

	while (num<2000000)
	{
        prime=true;
        if (num<=1)
        {
            prime = false;
        }
        else if(num==2||num==3)
        {
            prime = true;
        }
        else if (num%2==0)
        {
            prime = false;
        }
        else
        {
            for(divisor=3; divisor <1415;divisor=divisor+2)
            {
                if (num==divisor)
                {
                    prime=true;
                }
                else if (num%divisor==0)
                {
                    prime=false;
                    break;
                }
            }
        }
    if (prime==true)
    {
        total=total+num;
    }
        num=num+2;
    }
        cout<<"The summation of all prime numbers less than 2,000,000 is: " << total <<endl;
}
