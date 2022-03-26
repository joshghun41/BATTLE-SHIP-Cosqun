#pragma once
#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
int gemisayi1 = 20;
int gemisayi2 = 20;
int X = 0;
int Y = 0;
int X_1 = 0;
int Y_1 = 0;
int X_2 = X;
int Y_2 = Y;

int Gemininolcusu = 4;
int sayi1 = 1;

int Gemininolcusu2 = 4;
int sayi2 = 1;

int Gemininolcusu3 = 4;
int sayi3 = 1;

const int s2 = 12;

bool vurulub = 0;
bool vurulub_reqib = 0;

const int s = 12;
int oyun[s][s] = {};
int oyun_reqib[s][s] = {};

enum Herifler { A, B, C, D, E, F, G, H, I, J };
enum Istiqametler { yuxari = 72, assagi = 80, sag = 77, sol = 75 };
enum Deyisenler {  vurulmamis = 14, dagidilmis = 15,Gemi = 12, Divar = 11, Vurus = 13 };
