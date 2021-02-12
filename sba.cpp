#include <iostream>

using namespace std;


int AND_Function(int figure1, int figure2);
int OR_Function(int figure3, int figure4);
int XOR_Function(int figure5, int figure6);

int main(){
  int A, B, C_In, sum, carry, temp1, temp2, temp3;
  cout << "Input your first binary number: " ;
  cin >> A;
  cout << endl << "Input your second binary number: " ;
  cin >> B;
  cout << endl << "C_In Value is: " ;
  cin >> C_In;
  cout << endl;
  temp1 = XOR_Function(A, B);
  sum = XOR_Function(temp1, C_In);
  temp2 = AND_Function(A, B);
  temp3 = AND_Function(C_In, temp1);
  carry = OR_Function(temp2, temp3);
  cout << "Sum is: " << sum << " and Carry_Out is: " << carry << endl; 

  return 0;  
}

int AND_Function(int figure1, int figure2){
  int output1; 
  output1 = figure1 & figure2;
  return output1;
}

int OR_Function(int figure3, int figure4){
  int output2;
  output2 = figure3 | figure4;
  return output2;
}

int XOR_Function(int figure5, int figure6){
  int output3;
  output3 = ((~figure5 & figure6) | (figure5 & ~figure6));
  return output3;
}
