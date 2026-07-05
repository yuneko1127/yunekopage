#define N 100 // データ数

// In computer
int binary_search(int *data, int key){
    int pl, pr, pc;
     
    pl = 0;
    pr = N-1;
                
    do{
        pc = (pl+pr)/2;
        if(data[pc] == key){
            return pc;
        } else if(data[pc] < key){
            pl = pc + 1;
        } else{
            pr = pc - 1;
        }
    }while(pl <= pr);
                
    return -1;		 
}

// In society
void binary_search(Person *people){
    int i;
    
    for(i=0; i<N; i++){
        if(people[i].appearance == 'M'){
            people[i].gender = 'M';
        } else if(people[i].appearance == 'F'){
            people[i].gender = 'F';
        }
    }
    return;
}
