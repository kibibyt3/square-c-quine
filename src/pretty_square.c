/* GOAL: 60x33 */
int printf();
int main() {
  char(k) = '%';
  char(l) = 'c';
  char(a[]) = {k, l, k, l, k, l, k, l, 0};
  char *s = "int printf();;int main(){;<{69;};<;char(k)='%';;char\n\
(l)='c';>char(a[])={k,l,k,l,k,l,k,l,0};;{420;}char*s=\n\
?;`char(b[])={k,l,0};>>char(c[])={k,l,k,'s',k,l,0};//\n\
<#char(d[])={k,l,k,l,0};char(e[])={k,l,k,l,k,l,0};{};\n\
<#{2;}char(f[])={k,l,k,l,k,l,k,l,0};for(int(i)=0;s[i]\n\
!=0;i++){switch(s[i]){case(63):<#printf(b,34);for(int\n\
(j)=0;s[j]!=0;j++){switch(s[j]){case(10):;<#printf(a,\n\
92,'n',92,10);break;default:<#printf(b,s[j]);break;}}\n\
printf(b,34);break;case(96):<#printf(b,10);break;case\n\
(35):printf(d,59,59);break;<#case(60):;;printf(e,123,\n\
125,59);break;case(62):printf(f,59,59,59,59);<#break;\n\
default:##;printf(b,s[i]);break;}}}/*liv.wuz.here!:3*/";
  char(b[]) = {k, l, 0};
  char(c[]) = {k, l, k, 's', k, l, 0}; //
  char(d[]) = {k, l, k, l, 0};
  char(e[]) = {k, l, k, l, k, l, 0};
  char(f[]) = {k, l, k, l, k, l, k, l, 0};
  char(g[]) = {'{','(','2','5','6',')',';','}',';',';'};
  for (int(i) = 0; s[i] != 0; i++) {
    switch (s[i]) {
    case (63):
      printf(b, 34);
      for (int(j) = 0; s[j] != 0; j++) {
        switch (s[j]) {
        case (10):;
          printf(a, 92, 'n', 92, 10);
          break;
        default: 
          printf(b, s[j]);
          break;
		}
	  }
      printf(b, 34);
      break;
    case (96): /* ` -> \n */
      printf(b, 10);
      break;
    case (35): /* # -> ;; */
      printf(d, 59, 59);
      break;
    case (60): /* < -> {}; */
      printf(e, 123, 125, 59);
      break;
    case (62): /* > -> ;;;; */
      printf(f, 59, 59, 59, 59);
      break;
	case (45): /* - -> {(256);};; (but six times) */
	  for (int(j) = 0; j != 6; j++) {
        printf(g); 
	  }
	  break;
	case (64): /* @ -> {2;} */
	  printf(f, 123, 50, 59, 125);
	  break;
    default:;
      printf(b, s[i]);
      break;
    }
  }
}