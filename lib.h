bool f(char d2[10][20], char d1[20],int &i){
    for(int x=0; x<10; x++){
        for(int y=0; y<20; y++){
            if(d2[x][y]!=d1[y]){
                y=20;
            }else{
                if(y==19){
                    i=x;
                    return true;
                }
            }
        }
    }
    return false;
}
