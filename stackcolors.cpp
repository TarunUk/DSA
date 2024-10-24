//#include<iostream>
//#include<stack>
//using namespace std;
//int main(){
//	stack<string>colors;
//	colors.push("Red");
//	colors.push("Orange");
//	colors.push("Blue");
//	
//	cout << "Stack: ";
//	
//	while(!colors.empty()){
//		cout << colors.top() << ", ";
//		colors.pop();
//	}
//	return 0;
//}
//
////
////#include<iostream>
////#include<stack>
////using namespace std;
////int main()
////{
////	stack<string>names;
////	names.push("Rahul");
////	names.push("Rishi");
////	names.push("Abhi");
////	
////	 if (names.size() >=3) {
////        cout << "Top value: " << names.top() << endl;
////        names.pop();
////        
////        cout <<"Next value: " << names.top() << endl;
////        names.pop();
////        
////        cout <<"Next value: " << names.top() << endl;
////        
////    } else {
////        cout << "The stack is empty." << endl;
////	return 0;
////}
////}
////	
////
////
////
////#include<iostream>
////#include<stack>
////using namespace std;
////int main()
////{
////	const int MAX = 5;
////	int stack[MAX];
////	int top = -1;
////	if(top == MAX - 1){
////		cout<<"Stack Overflow\n";
////	}
////	else{
////		top++;
////		stack[top] = 10;
////		cout<<"Inserted: " << stack[top] << endl;
////	}
////	
////	if (top ==MAX - 1){
////		cout<<"Stack Overflow\n";
////	}
////	else{
////		top++;
////		stack[top] = 20;
////		cout << "Inserted: " << stack[top] << endl;
////	
////	}
////	
////		if (top ==MAX - 1){
////		cout<<"Stack Overflow\n";
////	}
////	else{
////		top++;
////		stack[top] = 30;
////		cout << "Inserted: " << stack[top] << endl;
////	}
////	return 0;
////}
////
////
////
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	const int MAX = 5;
	int stack[MAX];
	int top = -1;
	if(top < MAX - 1){
		top++;
		stack[top] = 10;
		
	if(top < MAX -1){
		top++;
		stack[top] = 20;
	}
	}
	return 0;
}
