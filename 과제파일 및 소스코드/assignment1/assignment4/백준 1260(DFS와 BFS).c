// 백준 1260(DFS와 BFS)
// 자료구조 알고리즘  graph _ DFS& BFS 

#include <stdio.h>

int arr[1001][1001]={0};
int dfsvisited[1001]={0};
int bfsvisited[1001]={0};


void DFS (int v, int n) {
	int i;
	printf("%d ", v); // 정점 출력
	dfsvisited[v] = 1; // 방문 표시
	
	// 인접 정점 탐색 
	for (i = 1; i <= n; i++) {
		
		if (arr[v][i] && !dfsvisited[i]) { // 방문x(visited==0) & 이동 가능하다면(arr[][]==1)
			DFS(i, n); // 정접 n에서 DFS재시작 
		}
	}
}

void BFS(int v,int n){
    int front=0,rear=0,Pop,i;
    int queue[1001];
    printf("%d ",v);
    queue[0]=v;
    rear++;
    bfsvisited[v]=1;
 
    while(front<rear){
        Pop=queue[front];
        front++;
        
        for(i=1;i<=n;i++){
            if(arr[Pop][i]==1 && bfsvisited[i]==0){
                printf("%d ",i);
                queue[rear]=i;
                rear++;
                bfsvisited[i]=1;
            }
        }
    }
}


int main(void) 
{
	int n,m,v;
	int i;
	int x,y;
	
	scanf("%d %d %d", &n, &m, &v);
	
	for(i=0; i<m; i++){
		scanf("%d %d", &x, &y);
		arr[x][y]=1; // 1 입력
		arr[y][x]=1; // 1 입력	 
	}
	
	DFS(v,n);
	//int visited[1001]={0};
	printf("\n");
	BFS(v,n);
	
	
	return 0;
}
