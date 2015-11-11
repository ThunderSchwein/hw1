using namespace std;

cin >> N; 
int h; f1=0, f2=1;

for(int i=0; i<N-1; i++){ 
  h=f1
  f1=f2
  f2+=h;
}
  
cout << f2 << endl;
