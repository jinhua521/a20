#include <stdio.h>
struct point
{
    int x;
    int y;
};

int main(){
     int index = 0;
     struct point arr[100];
    printf("huanyingjinruzhuancheweizhiguanlixitong!\n");
    while(1){
        printf("1---tianjiacheliangweizhi\n");   
         printf("2---shanchucheliangweizhi\n");   
          printf("3---xianshiquanbucheliangweizhi\n");   
           printf("4---fanhuiliwodeweizhizuijindecheliang\n");   
            printf("5---tuichu\n");
        printf("qingxuanzexiangyinggongneng\n");
        int code;
        scanf("%d",&code); 

        if( code == 1){
            printf("qingshurucheliangweizhide x zuobiao he y zuobiao: \n");
            int  x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            arr[index].x = x;
            arr[index].y = y;
             index ++;

             printf("tianjiachenggong\n");
             char xx;
             scanf("%c",&xx);
              scanf("%c",&xx);
        }  
          if( code == 2){
              if(index > 0){
                  index --;
                  printf("shanchuchengong\n");
                  char xx;
                  scanf("%c",&xx);
                  scanf("%c",&xx);
              }
              else
              {
                  printf("wucheliangweizhi,shanchushibai\n");
                  char xx;
                  scanf("%c",&xx);
                  scanf("%c",&xx);
              }

        }       
          if( code == 3){
               printf("suoyoucheliangweizhiruxia :\n ");
               for(int i = 0; i<index;i ++){
                   printf("di %d gecheliangweizhiwei(%d,%d)\n,i + 1,arr[i].x,arr[i].y");              
               }
               printf("\ndianjihuichejixu\n");
               char xx;
               scanf("%c",&xx);
                scanf("%c",&xx);

        }       
          if( code == 4){

        }       
          if( code == 5){

        }            
    }

    return 0;

}