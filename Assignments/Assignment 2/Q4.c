/*
	Name: Mohammad Yesaullah Sheikh
	Date: 28/10/2023
	Description: Finding a path from the start to the end of a maze.
*/

#include <stdio.h>
#define r 5
#define c 5

int maze[r][c] = {
    {'S', 'O', 'O', 'W', 'W'},
    {'O', 'W', 'O', 'W', 'W'},
    {'W', 'O', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'E', 'W'}
};

int visited[r][c] = {0};
//functions defined
	int isSafe(int x, int y);
	int findPath(int x, int y);
	void printPath();
	
int main(){
    int x_start, y_start;
    int i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(maze[i][j]=='S'){
                x_start=i;
                y_start=j;
                break;
            }
        }
	}
    if(find_path(x_start, y_start)){
        printf("The path must be as following: \n");
        print_path();
    }
}

int is_safe(int x, int y){
    return (x>=0 && x<r && y>=0 && y<c && maze[x][y]!='W' && !visited[x][y]);
}

int find_path(int x, int y){
    if(maze[x][y]=='E'){
        visited[x][y]=1;
        return 1;
    }

    if(is_safe(x, y)){
        visited[x][y]=1;

        if(find_path(x+1, y) || find_path(x, y+1)){
            return 1;
        }
        visited[x][y]=0;
    }
    return 0;
}

void print_path(){
	int i, j;
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            if(visited[i][j]){
                printf("(%d, %d), ", i, j);
            }
        }
    }
    printf("\n");
}
