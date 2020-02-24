#include "FishHeader.h"

//Гобальное время в программе
int Sec;
bool PeaceFishExist = false;
bool AngryFishExist = false;
//Координаты для конструктора классов
int PeaceFishLocationX = 450;
int PeaceFishLocationY = 300;
int AngryFishLocationX = 950;
//Переменные необходимые для визуализации
int PF1X;
int PF1Y;
int PF2X;
int PF2Y;
int PF3X;
int PF3Y;
int PF4X;
int PF4Y;
int AF1X;
int AF1Y;
int AF2X;
int AF2Y;
int AF3X;
int AF3Y;
int AF4X;
int AF4Y;
//Переменные для конструктора
int AngryFishLocationY = 50;
int NewFishFoodLocationX = 600;
int NewFishFoodLocationY = 100;
int PeaceFishLifeSpan;
int PeacFishLifeTime;
int AngryFishLifeTime;
int PeaceFishHungry = 300;
int AngryFishHungry = 300;
bool PeaceFishInDanger;
//Переменные для работы интерфейса
bool PF1Created = false;
bool PF2Created = false;
bool PF3Created = false;
bool PF4Created = false;
bool AF1Created = false;
bool AF2Created = false;
bool AF3Created = false;
bool AF4Created = false;
int SwimDirection = 1;
int Range;
//Глобальные переменные свойств
bool GlobalNewPeaceFishExist = false;
bool GlobalFishFoodExist = false;
bool GlobalAngryPeaceFishExist = false;
bool GlobalPeaceFishEaten = false;
bool GlobalFishFoodEaten = false;
bool GlobalSwitchStatus = false;
int PeaceFishCount;
int AngryFishCount;
int WormsCount;
int AF1Hunger;
int AF2Hunger;
int AF3Hunger;
int AF4Hunger;
//Переменные для праильного создания объектов
bool CPF1Ready = false;
bool CPF2Ready = false;
bool CPF3Ready = false;
bool CPF4Ready = false;
bool CAF1Ready = false;
bool CAF2Ready = false;
bool CAF3Ready = false;
bool CAF4Ready = false;
bool PF1NearDeath;
bool PF2NearDeath;
bool PF3NearDeath;
bool PF4NearDeath;
//Переменные для интерфейса
int ZaderzhkaSec;
bool ZaderzhkaEnabled = false;
bool WormExist = false;
bool WormBoop = false;
int Worm_X;
int Worm_Y;
int ChaseSec;
bool StopChase = false;
int AnimationSec;
int SeaWeedAnimation;