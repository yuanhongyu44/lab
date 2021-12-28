#include <stdio.h>
#include <stdlib.h> 

#include <iostream> 
#include <fstream>
#include <sstream>
#include <stack>

#include <cstring>



using namespace std;
int main(){
	char ch; 
	FILE *r=fopen("test.txt","r");
	ofstream destFile("out.txt", ios::out);
	while((ch=getc(r))!=EOF){
		destFile<<ch;
		
	} 
} 
