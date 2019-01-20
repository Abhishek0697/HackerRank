int pageCount(int n, int p) {
    int c=floor(p/2);
    int d=floor(n/2)-c;
    int a;
    if(c<d){
        a=c;
    }
    else{a=d;}

return(a);
}
