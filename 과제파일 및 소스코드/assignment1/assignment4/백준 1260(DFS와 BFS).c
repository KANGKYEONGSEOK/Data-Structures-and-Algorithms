// ���� 1260(DFS�� BFS)
// �ڷᱸ�� �˰���  graph _ DFS& BFS 

#include <stdio.h>

int arr[1001][1001]={0};
int dfsvisited[1001]={0};
int bfsvisited[1001]={0};


void DFS (int v, int n) {
	int i;
	printf("%d ", v); // ���� ���
	dfsvisited[v] = 1; // �湮 ǥ��
	
	// ���� ���� Ž�� 
	for (i = 1; i <= n; i++) {
		
		if (arr[v][i] && !dfsvisited[i]) { // �湮x(visited==0) & �̵� �����ϴٸ�(arr[][]==1)
			DFS(i, n); // ���� n���� DFS����� 
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
		arr[x][y]=1; // 1 �Է�
		arr[y][x]=1; // 1 �Է�	 
	}
	
	DFS(v,n);
	//int visited[1001]={0};
	printf("\n");
	BFS(v,n);
	
	
	return 0;
}
