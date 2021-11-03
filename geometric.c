#include <stdio.h>
#include <float.h>
#include <math.h>
#include <string.h>


int main (void) {

  long double sh1n1=0,sh1n2=0,sh1n3=0,sh2n1=0,sh2n2=0,sh2n3=0,obs1=0,obs2=0,obv1=0,obv2=0,s1=0,s2=0,n1=0,n2=0;
  char tp1='R',tp2='R',obr1[]="trojuhelnik",obr2[]="trojuhelnik";
  printf("Obrazec #1\n");
  scanf(" %c",&tp1);
  if (tp1=='S') {
    if (scanf(" %Lf",&sh1n1)!=1 || sh1n1<=DBL_EPSILON*1024*sh1n1) {
      printf("Nespravny vstup.\n");
      return 1;
    }
  } else if (tp1=='R') {
    if (scanf(" %Lf %Lf",&sh1n1,&sh1n2)!=2 || sh1n1<=DBL_EPSILON*1024 || sh1n2<=DBL_EPSILON*1024 || sh1n1==sh1n2) {
      printf("Nespravny vstup.\n");
      return 1;
    }
  } else if (tp1=='T') {
    if (scanf(" %Lf %Lf %Lf",&sh1n1,&sh1n2,&sh1n3)!=3 || sh1n1<=DBL_EPSILON*1024 || sh1n2<=DBL_EPSILON*1024 || sh1n3<=DBL_EPSILON*1024 || sh1n1+sh1n2<=sh1n3 or sh1n2+sh1n3<=sh1n1 or sh1n1+sh1n3<=sh1n2 || fabs((sh1n1+sh1n2)-sh1n3)<=DBL_EPSILON*1024 or fabs((sh1n2+sh1n3)-sh1n1)<=DBL_EPSILON*1024 or fabs((sh1n1+sh1n3)-sh1n2)<=DBL_EPSILON*1024) {
      printf("Nespravny vstup.\n");
      return 1;
    }
  } else  {
    printf("Nespravny vstup.\n");
    return 1;
  }

  printf("Obrazec #2\n");
  scanf(" %c",&tp2);
  if (tp2=='S') {
    if (scanf(" %Lf",&sh2n1)!=1 || sh2n1<=DBL_EPSILON*1024*sh2n1) {
      printf("Nespravny vstup.\n");
      return 1;
    }
  } else if (tp2=='R') {
    if (scanf(" %Lf %Lf",&sh2n1,&sh2n2)!=2 || sh2n1<=DBL_EPSILON*1024 || sh2n2<=DBL_EPSILON*1024 || sh2n1==sh2n2) {
      printf("Nespravny vstup.\n");
      return 1;
    }
  } else if (tp2=='T') {
    if (scanf(" %Lf %Lf %Lf",&sh2n1,&sh2n2,&sh2n3)!=3 || sh2n1<=DBL_EPSILON*1024 || sh2n2<=DBL_EPSILON*1024 || sh2n3<=DBL_EPSILON*1024 || sh2n1+sh2n2<=sh2n3 or sh2n2+sh2n3<=sh2n1 or sh2n1+sh2n3<=sh2n2 || fabs((sh2n1+sh2n2)-sh2n3)<=DBL_EPSILON*1024 or fabs((sh2n2+sh2n3)-sh2n1)<=DBL_EPSILON*1024 or fabs((sh2n1+sh2n3)-sh2n2)<=DBL_EPSILON*1024) {
      printf("Nespravny vstup.\n");
      return 1;
    }
  } else  {
    printf("Nespravny vstup.\n");
    return 1;
  }

    switch (tp1) {

      case 'S':
        obs1=sh1n1*sh1n1;
        obv1=sh1n1*4;
        strcpy(obr1,"ctverec");
        break;

      case 'R':
        obs1=sh1n1*sh1n2;
        obv1=(sh1n1*2)+(sh1n2*2);
        strcpy(obr1,"obdelnik");
        break;

      case 'T':
        s1=(sh1n1+sh1n2+sh1n3)/2;
        n1=s1*(s1-sh1n1)*(s1-sh1n2)*(s1-sh1n3);
        obs1=sqrt(n1);
        obv1=sh1n1+sh1n2+sh1n3;
        strcpy(obr1,"trojuhelnik");
        break;
    }

    switch (tp2) {

      case 'S':
        obs2=sh2n1*sh2n1;
        obv2=sh2n1*4;
        strcpy(obr2,"ctverec");
        break;

      case 'R':
        obs2=sh2n1*sh2n2;
        obv2=(sh2n1*2)+(sh2n2*2);
        strcpy(obr2,"obdelnik");
        break;

      case 'T':
        s2=(sh2n1+sh2n2+sh2n3)/2;
        n2=s2*(s2-sh2n1)*(s2-sh2n2)*(s2-sh2n3);
        obs2=sqrt(n2);
        obv2=sh2n1+sh2n2+sh2n3;
        strcpy(obr2,"trojuhelnik");
        break;
    }


    if (fabs(obs2)<=DBL_EPSILON*1024) {
      printf("Nespravny vstup.\n");
      return 1;
    }

    if (fabs(obv1-obv2)<=DBL_EPSILON*1024) {
      printf("Obvod: %s #1 = %s #2\n",obr1,obr2);
    } else {
      if (obv1>obv2) {
        printf("Obvod: %s #1 > %s #2\n",obr1,obr2);
      } else if (obv1<obv2) {
        printf("Obvod: %s #1 < %s #2\n",obr1,obr2);
      }
    }


    if (fabs(obs1-obs2)<=DBL_EPSILON*1024) {
      printf("Obsah: %s #1 = %s #2\n",obr1,obr2);
    } else {
      if (obs1>obs2) {
        printf("Obsah: %s #1 > %s #2\n",obr1,obr2);
      } else if (obs1<obs2) {
        printf("Obsah: %s #1 < %s #2\n",obr1,obr2);
      }
    }
    // printf("%f %f %f %f\n",obv1,obs1,obv2,obs2);
  }
