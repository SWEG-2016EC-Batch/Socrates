#include <iostream>
using namespace std;

int main(){
int num, original_num, count, rev=0;
cout<<"Enter an integer number:";
cin>>num;
original_num = num;
count =0;
        while(num!=0)
         {
            num /=10;
            count++;
         }
char choice;
cout<<"please choose one options to perform on the following :"<<endl;
cout<<"A  :Reverse the number"<<endl;
cout<<"B  :Find the number of digits in the number "<<endl;
cout<<"C  :Find the product of the even digits in the number "<<endl;
cout<<"D  :Find the sum of the first and last digits of the number"<<endl;
cout<<"E  :Swap the first and the last digits of the number"<<endl;
cout<<"F  :Check if the number  is palindrome or not"<<endl;
cout<<"G  :Find the frequency of every digit in the number and print in a table foramt"<<endl;
cout<<"H  :Check if the number is strong number or not"<<endl;
cout<<"I  :Check if the number is Perfect number or not"<<endl;
cin>>choice;

switch (choice)
{
  case 'A':
  {

    int rev =0;
    while(num!=0)
    {
        rev = rev*10 + num%10;
        num /=10;
    }
    cout <<"The reverse of the number is :"<<rev<<endl;
    break;
 }
    case 'B':
     {
         
         cout<<"The number of Digit in the number is  :"<<count<<endl;
         break;
}
     case 'C':
        {
            int product =1;
            while(num!=0)
            {
                int digit = num%10;
                if (digit%2 ==0)
                {
                    product *= digit;
                }
                num/=10;
            } 
            cout<<"The sum of the even digits in the given number is "<<product<<endl;
            break;
        }
        case  'D':
        {
            int first,sum =0;
            int last = num%10;
            while(num!=0){
                 first=num%10;
                sum= first+ last;
                num/=10;
            }
               cout<<sum;
               break;
        }
        case 'E':
        {              
            int new_num, mid, mid_rev = 0, result;
            int last = original_num % 10;
            int first = original_num;
            int temp = 0;
            while (first >= 10)
            {
                first /= 10;
            }
            mid = original_num / 10;
            while (mid >= 10)
            {
                temp = temp * 10 +mid % 10;
                mid /= 10;
            }
            int swap= temp;
            while (swap != 0)
            {
                mid_rev = mid_rev * 10 + swap %10;
                swap/= 10;
            }
            for (int i = 2; i < count; i++)
            {
                last *= 10;
            }

            result = ((last + mid_rev)*10 + (first ));
            cout << "the result of swapping the first and the last digit is :" << result << endl;
            break;
        }
        case 'F':
        {
            if (num == rev)
            {
                cout << "The Number is Palindrome" << endl;
            }
            else
            {
                cout << "The number is not Palindrome" << endl;
            }
            break;
        }
case 'G':
{
    int freq[10] = {0}; // Array to store frequency of each digit (0-9)
    int numd[count];
    int tenum = original_num;

    cout << "  Digit " << " frequency" << endl;

    // Extract digits and count their frequency
    for (int i = 0; i < count; i++)
    {
        int digit = tenum % 10;
        numd[i] = digit;
        freq[digit]++; // Increment the frequency of the digit
        tenum /= 10;
    }

    // Print the digits and their frequencies
    for (int i = 0; i < count; i++)
    {
        if (freq[numd[i]] != 0)
        {
            cout << numd[i] << "  " << freq[numd[i]] << endl;
            freq[numd[i]] = 0; // Set frequency to 0 to avoid duplicate printing
        }
    }

    cout << "--------------------------------------------";

    break;
}
 case 'H':
 {
    int sumf=0;
   int temp= original_num;
   while(temp!=0)
   {
    int fact=1;
    int digit = temp%10;
    for(int i=1; i<=digit; i++)
    {
        fact *= i;
    }
    sumf += fact;
     // temp/=10; // Remove this line
   }
   if (sumf == original_num)
   {
     cout<<"the number is a strong number"<<endl;
   }
   else
{
  cout<<"the number is not a strong number";
   }
   break;
 }
 case 'I':
 {
    int sumd = 0;
    for(int i = 1; i < original_num; i++)
    {
        if (original_num % i == 0)
        {
            sumd += i;
        }
    }
    if (sumd == original_num)
    { 
        cout<<"The number is a perfect number"<<endl;
    }
    else
    {
        cout<<"The number is not a perfect number"<<endl;
    }
    break;
 }
    default:
{
    cout<<"Ivalid choice"<<endl;
    break;
}
 }
         



 return 0;  
}
