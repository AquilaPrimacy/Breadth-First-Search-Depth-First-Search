#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<vector>
#include<conio.h>
using namespace std;

#include"Graph.cpp"

int main(void){
	int vertices;
	cout<<"Enter the number of vertices: ";
	cin>>vertices;
	Graph graph(vertices);
	while(true){
		system("cls");
		cout<<"There are "<<vertices<<" vertices."<<endl;
		cout<<"Select what to do: "<<endl;
		cout<<"[0] Add edge."<<endl;
		cout<<"[1] Breadth-First Search(BFS)."<<endl;
		cout<<"[2] Depth-First Search(DFS)."<<endl;
		cout<<"[3] Exit"<<endl<<endl;
		cout<<"Input: ";
		string selection;
		cin>>selection;
		if(selection.compare("0") == 0){
			system("cls");
			int from, to;
			cout<<"Add Edge"<<endl;
			cout<<"From vertex: ";
			cin>>from;
			cout<<"To vertex: ";
			cin>>to;
			graph.addEdge(from, to);
		}
		else if(selection.compare("1") == 0){
			system("cls");
			int input;
			cout<<"Find all edges of what using BFS."<<endl;
			cout<<"Input: ";
			cin>>input;
			graph.BFS(input);
		}
		else if(selection.compare("2") == 0){
			system("cls");
			int input;
			cout<<"Find edges of what using DFS."<<endl;
			cout<<"Input: ";
			cin>>input;
			graph.DFS(input);
		}
		else if(selection.compare("3") == 0){
			system("cls");
			break;
		}
		else{
			system("cls");
			cout<<"Out of Order.";
		}
	}
	system("cls");
	cout<<"Exiting."<<endl;
	system("pause");
}

