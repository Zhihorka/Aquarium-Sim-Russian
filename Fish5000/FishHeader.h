#pragma once
#include <cmath>
#include <ctime>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


int CalculateRange(int x1, int y1, int x2, int y2) {
	int Xer = abs(x1 - x2);
	int Yer = abs(y1 - y2);
	int ActualRange = ceil(sqrt(pow(Xer, 2) + pow(Yer, 2)));
	return ActualRange;

}
bool SmartFishFoodEatenClass(int FoodX, int FoodY, int FishX, int FishY, PictureBox^PB) {
	int SmartRange = CalculateRange(FoodX, FoodY, FishX, FishY);
	if (SmartRange < 30) {
		PB->Visible = 0;
		return false;
	}
	else {
		return true;
	}

}

public ref class FishFood {
protected:
	int AnimationIndex;
	PictureBox^ FoodPbContainer;
	int LifeTime;
	bool CPF1Create;
	bool CPF2Create;
	bool CPF3Create;
	bool CPF4Create;
	
public:

	int LocationX;
	int LocationY;

	property int p_LocationX { // Определение свойства

		int get() {

			return LocationX; // Возвращение значения поля

		}

		void set(int value) {

			if (value >= 0 && value <= 200)

				LocationX = value; // Сохранение значения в поле

		}
	}

	property int p_LocationY { // Определение свойства

		int get() {

			return LocationY; // Возвращение значения поля

		}

		void set(int value) {

			if (value >= 0 && value <= 200)

				LocationY = value; // Сохранение значения в поле

		}
	}

	FishFood(PictureBox^ArgPbContainer) {
		LocationX = 600;
		LocationY = 200;
		FoodPbContainer = ArgPbContainer;
	}
	~FishFood() {
		delete FoodPbContainer;
	}

	property int  Property_LocationX
	{
		int get()
		{
			return LocationX;
		}
		void set(int Location)
		{
			LocationX = Location;
		}
	}

	property int  Property_LocationY
	{
		int get()
		{
			return LocationY;
		}
		void set(int Location)
		{
			LocationY = Location;
		}
	}

	void SetCreateStatusForFishFood(bool first, bool second, bool third, bool fouth) {
		CPF1Create = first;
		CPF2Create = second;
		CPF3Create = third;
		CPF4Create = fouth;
	}

	void CheckForPeaceFish() {
		if (CPF1Create == true) {
		   
		}
	}

	void FishFoodEatenAdvanced(bool status) {
		FoodPbContainer->Visible = status;
	}

	void Falling() {
		if (LocationY < 650) {
			LocationY = LocationY + 1;
			FoodPbContainer->Location = System::Drawing::Point(LocationX, LocationY);
		}
	}

	int GetLocationX() {
		return LocationX;
	}
	
	int GetLocationY() {
		return LocationY;
	}
	
	void FishFoodAnimation() {
		if (LocationY < 100000) {
			AnimationIndex++;
			if (AnimationIndex == 20) {
				FoodPbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\FF1.png");
			}
			else if (AnimationIndex == 40) {
				FoodPbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\FF2.png");
			}
			else if (AnimationIndex == 60) {
				FoodPbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\FF3.png");
			}
			else if (AnimationIndex == 80) {
				FoodPbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\FF4.png");
			}
			else if (AnimationIndex == 100) {
				AnimationIndex = 0;
			}
		}
	}

};

//базовый класс
public ref class Fish {

private:

protected:
	int LocationX;
	int LocationY;
	int LifeSpan;
	int LifeTime;
	int Hungry;
	PictureBox^ PbContainer;
	int SwimDirection;
	int AnimationIndex;
	bool PeaceFishObjectExist;
	bool AngryFishObjectExist;
	bool FishFoodObjectExist;
	int CPF1X;
	int CPF1Y;
	int CPF2X;
	int CPF2Y;
	int CPF3X;
	int CPF3Y;
	int CPF4X;
	int CPF4Y;
	int CAF1X;
	int CAF1Y;
	int CAF2X;
	int CAF2Y;
	int CAF3X;
	int CAF3Y;
	int CAF4X;
	int CAF4Y;
public:

	Fish() {

	}
	Fish(int ArgLocationX, int ArgLocationY, int ArgLifeSpan, int ArgLifeTime, int ArgHungry, PictureBox^PB) {
		LocationX = ArgLocationX;
		LocationY = ArgLocationY;
		LifeSpan = ArgLifeSpan;
		LifeTime = ArgLifeTime;
		Hungry = ArgHungry;
		PbContainer = PB;
		SwimDirection = 1;
		AnimationIndex = 1;
		PeaceFishObjectExist = false;
		AngryFishObjectExist = false;
		FishFoodObjectExist = false;
	}

	property int Property_AnimationIndex { // Определение свойства
		int get() {
			return AnimationIndex; // Возвращение значения поля
		}

		void set(int value) {
				AnimationIndex = value; // Сохранение значения в поле
		}
	}


	property int Property_SwimDirection { // Определение свойства
		int get() {
			return SwimDirection; // Возвращение значения поля
		}

		void set(int value) {
			SwimDirection = value; // Сохранение значения в поле
		}
	}

	property int Property_LocationX { // Определение свойства

		int get() {

			return LocationX; // Возвращение значения поля

		}

		void set(int value) {

		

				LocationX = value; // Сохранение значения в поле

		}
	}

	void FishLifeEndAdvanced(bool status) {
		PbContainer->Visible = status;
	}

	property int Property_LocationY { // Определение свойства

		int get() {

			return LocationY; // Возвращение значения поля

		}

		void set(int value) {

		

				LocationY = value; // Сохранение значения в поле

		}
	}

	int GetLocationX() {
		return LocationX;
	}
	int GetLocationY() {
		return LocationY;
	}
	int LifeTimePlus() {
		return LifeTime++;
	}


	void NewPeaceFishCreated() {
		PeaceFishObjectExist = true;

	}

	void NewAngryFishCreated() {
		AngryFishObjectExist = true;
	}

	void NewFishFoodObjectCreated() {
		FishFoodObjectExist = true;
	}

	void NewPeaceFishVanish() {
		PeaceFishObjectExist = false;
	}

	void NewAngryFishVanish() {
		AngryFishObjectExist = false;
	}

	void FishFoodObjectVansih() {
		FishFoodObjectExist = false;
	}
	int CalculateRange(int a, int b) {
		return ceil(sqrt((a - b) * (a - b) + (a - b) * (a - b)));
	}

	void LifeTimeSpec(int multiplayer) {
		LifeTime = 50;
		LifeTime += LifeTime * multiplayer;
		MessageBox::Show(Convert::ToString(this));
	}

};

//класс-наследник
public ref class PeaceFish : public Fish {
private:
	int PeaceFishSec;
	bool InDanger;
	FishFood^FishFoodObject;
	PeaceFish^PeaceFishObject1;
	PeaceFish^PeaceFishObject2;
	PeaceFish^PeaceFishObject3;
	bool SpotFood;
	int FishFoodX;
	int FishFoodY;
	bool FishFoodEaten;
	bool FishFoodDone;
	bool LampActive;
	bool PeaceFishCreated;
	int downY;
	int upY;
	int LifeTime;
	int OverallLifeTime;
	bool NearDeath;
	int ID;
	bool Panic;
public:
	//необходимые делегаты для событийного управления
	delegate void FishFoodEatenAdvanced_Handler(bool status);
	event FishFoodEatenAdvanced_Handler^ FishFoodEatenAdvanced_Event;

	delegate void FishLifeEndAdvanced_Handler(bool status);
	event FishLifeEndAdvanced_Handler^ FishLifeEndAdvanced_Event;

	PeaceFish(int ArgLocationX, int ArgLocationY, int ArgLifeSpan, int ArgLifeTime, int ArgHungry, bool ArgInDanger, PictureBox^PB, FishFood^ArgFishFood, PeaceFish^ArgAnotherPeaceFish1, PeaceFish^ArgAnotherPeaceFish2, PeaceFish^ArgAnotherPeaceFish3, bool ArgPeaceFishObjectExist, bool ArgAngryFishObjectExist, bool ArgFishFoodObjectExist, int ArgID) :Fish(ArgLocationX, ArgLocationY, ArgLifeSpan, ArgLifeTime, ArgHungry, PB) {
		LocationX = ArgLocationX;
		LocationY = ArgLocationY;
		LifeSpan = ArgLifeSpan;
		LifeTime = ArgLifeTime;
		Hungry = ArgHungry;
		InDanger = ArgInDanger;
		PbContainer = PB;
     	SpotFood = false;
		FishFoodObject = ArgFishFood;
		PeaceFishObjectExist = false;
		AngryFishObjectExist = false;
		FishFoodObjectExist = false;
		PeaceFishObjectExist = ArgPeaceFishObjectExist;
		AngryFishObjectExist = ArgAngryFishObjectExist;
		FishFoodObjectExist = ArgAngryFishObjectExist;
		FishFoodEaten = false;
		FishFoodDone = false;
		PeaceFishCreated = false;
		downY = -100;
		upY = 200;
		PeaceFishObject1 = ArgAnotherPeaceFish1;
		PeaceFishObject2 = ArgAnotherPeaceFish2;
		PeaceFishObject3 = ArgAnotherPeaceFish3;
		SwimDirection = 5;
		AnimationIndex = 5;
		PeaceFishSec = 0;
		ID = ArgID;
		Panic = false;
	}

	~PeaceFish() {

		delete PbContainer;


	}

	property int Property_AnimationFrame
	{
		int get()
		{
			return AnimationIndex;
		}
		void set(int Index)
		{
			AnimationIndex = Index;
		}
	}

	property bool Property_SpotFood
	{
		bool get()
		{
			return SpotFood;
		}
		void set(bool Status)
		{
			SpotFood = Status;
		}
	}

	property int Property_SwimDirecton
	{
		int get()
		{
			return SwimDirection;
		}
		void set(int NewDirection)
		{
			SwimDirection = NewDirection;
		}
	}

	property bool Property_Created
	{
		bool get()
		{
			return PeaceFishCreated;
		}
		void set(bool Status)
		{
			PeaceFishCreated = Status;
		}
	}

	void PeaceFishSetPanic(bool status) {
		Panic = status;
	}


	void PeaceFishEatenAdvanced(bool IsEaten) {

		NearDeath = IsEaten;
	}

	void SetLifeTime(int ArgLifeTime) {
		LifeTime = ArgLifeTime;
	}
	void LifeTimeTick() {
		if (LifeTime > 0)
			LifeTime = LifeTime - 1;
	}

	void SpotFoodEvent(bool Status) {
		Status = true;
	}

	int CalculateRange(int x1, int y1, int x2, int y2) {
		int Xer = abs(x1 - x2);
		int Yer = abs(y1 - y2);
		int ActualRange = ceil(sqrt(pow(Xer, 2) + pow(Yer, 2)));
		return ActualRange;

	}

	void FishChasedAction(Timer^t ) {
		t->Enabled = 1;
	}
	//проверка - достигнут ли корм 
	bool FishFoodChased(bool PF1Created, bool WormExist,int FoodX, int FoodY, int PFX, int PFY, PictureBox^FoodPB, bool Status, PeaceFish^PFObject) {
		if (PF1Created == true) {
			if (WormExist == true) {
				int ActualRange = CalculateRange(FoodX, FoodY, PFX, PFY);
				if (ActualRange < 30) {
					return Status = false;
					FishFoodEatenAdvanced_Event(false);
				}else {
					return Status = true;
				}
			}else {
				return Status = true;
			}
		}
		else {
			return Status = true;
		}

	}

	void SetLampActive(bool GlobalIndex) {
		LampActive = GlobalIndex;
	}
	bool GetFishFodEaten() {
		return FishFoodEaten;
	}
	void FishIsHungryMessageBox() {
		MessageBox::Show("Рыбка голодная");
	}

	void FishIsHungry() {
		if (Hungry < 400) {
			FishIsHungryMessageBox();
		}
	}

	void TrackFishFoodhXY(int X, int Y) {
		if (FishFoodObjectExist == true) {
			FishFoodX = X;
			FishFoodY = Y;
		}
	}

	void CheckNewFoodExist(bool Check) {
		FishFoodObjectExist = Check;
	}

	void Set_SpotFood(bool Status) {
		SpotFood = Status;
	}

	PictureBox^ GetPbContainer() {
		return PbContainer;
	}
	void Set_FishFoodLocation(int x, int y) {
		FishFoodX = x;
		FishFoodY = y;
	}

	//обычная модель перемещения
	void FishMove() {
		if (OverallLifeTime == 1100) {
			NearDeath = true;
		}
		
		if (PeaceFishCreated == false && NearDeath == false) {
			downY = downY + 2;

			if (downY < 300) {
				PbContainer->Location = System::Drawing::Point(450, downY);
			}
			else if (upY > 295) {
				upY = upY - 2;
				PbContainer->Location = System::Drawing::Point(450, upY);
			}
			else {
				PeaceFishCreated = true;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
		}
		else if (PeaceFishCreated == true && NearDeath == false) {


			if (SpotFood == false) {
				srand(time(0));
				if (LifeTime == 100) {
					SwimDirection = rand() % 8 + 1;
				}
				LifeTime++;
				if (Panic == true) {
					LifeTime = LifeTime + 100;
					if (LifeTime > 100) {
						SwimDirection = rand() % 8 + 1;
					}
				}
				OverallLifeTime++;
				int AfterX;
				int AfterY;
				if (SwimDirection == 1) {
					LocationY = LocationY - 1;
					AfterY = LocationY;
					if ((LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500)) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {
						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 2) {
					LocationX = LocationX + 1;
					LocationY = LocationY - 1;
					AfterX = LocationX;
					AfterY = LocationY;
					if (LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {
						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 3) {
					LocationX = LocationX + 1;
					AfterX = LocationX;
					if (LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {
						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 4) {
					LocationX = LocationX + 1;
					LocationY = LocationY + 1;
					AfterX = LocationX;
					AfterY = LocationY;
					if (LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {
						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 5) {
					LocationY = LocationY + 1;
					AfterY = LocationY;
					if (LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {
						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}

				}
				else if (SwimDirection == 6) {
					LocationX = LocationX - 1;
					LocationY = LocationY + 1;
					AfterX = LocationX;
					AfterY = LocationY;
					if (LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {

						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 7) {
					LocationX = LocationX - 1;
					AfterX = LocationX;
					if (LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {
						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}

				}
				else if (SwimDirection == 8) {

					LocationX = LocationX - 1;
					LocationY = LocationY - 1;
					AfterX = LocationX;
					AfterY = LocationY;
					if (LocationX > 400 && LocationX < 900 && LocationY > 150 && LocationY < 500) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					else {
						SwimDirection = rand() % 8 + 1;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
					

				}
				if (LifeTime > 200) {
					LifeTime = 0;
				}
			}
			else if (SpotFood == true) {
			PeaceFishSec++;
				MoveForFood(FishFoodObject);
			}
		}
		 if (NearDeath == true) {
			if (LocationY > 70) {
				LocationY = LocationY - 1;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\PFD.png");
			
			}else {
				FishLifeEndAdvanced_Event(false);
			}
		}
	}


	void Set_FishFoodObjectExist(bool Status) {
		FishFoodObjectExist = Status;
	}
	
	bool Get_SpotFood() {
		return SpotFood;
	}

	void SearchForFood() {
		if (FishFoodObjectExist == true) {
			int FoodLocationX = FishFoodX;
			int FoodLocationY = FishFoodY;
			int Xer = abs(LocationX - FoodLocationX);
			int Yer = abs(LocationY - FoodLocationY);
			int ActualRange = ceil(sqrt(pow(Xer, 2) + pow(Yer, 2)));
			if (ActualRange < 1000 && ActualRange > 50 && FishFoodDone == false) {
				
				SpotFood = true;
				
			}
			else if (ActualRange <= 50 || PeaceFishSec == 40) {
				FishFoodObjectExist = false;
				SpotFood = false;
				PeaceFishSec = 0;
			}
			else {
				SpotFood = false;
			}

		}
	}
	//перемещение
	void MoveForFood(FishFood^FishFoodObject) {
		if (SpotFood == true) {
			
			int PeaceFishLocationX = FishFoodX;
			int PeaceFishLocationY = FishFoodY;
		
			if (CalculateRange(LocationX, LocationY, PeaceFishLocationX, PeaceFishLocationY) < 100){
				FishFoodEatenAdvanced_Event(false);
			}



			if (PeaceFishLocationX == LocationX && PeaceFishLocationY < LocationY) {
				SwimDirection = 1;
				LocationY = LocationY - 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
			else if (PeaceFishLocationX > LocationX && PeaceFishLocationY < LocationY) {
				SwimDirection = 2;
				LocationX = LocationX + 2;
				LocationY = LocationY - 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
			else if (PeaceFishLocationX > LocationX && PeaceFishLocationY == LocationY) {
				SwimDirection = 3;
				LocationX = LocationX + 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
			else if (PeaceFishLocationX > LocationX && PeaceFishLocationY > LocationY) {
				SwimDirection = 4;
				LocationX = LocationX + 2;
				LocationY = LocationY + 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
			else if (PeaceFishLocationX == LocationX && PeaceFishLocationY > LocationY) {
				SwimDirection = 5;
				LocationY = LocationY + 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
			else if (PeaceFishLocationX < LocationX && PeaceFishLocationY > LocationY) {
				SwimDirection = 6;
				LocationX = LocationX - 2;
				LocationY = LocationY + 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
			else if (PeaceFishLocationX < LocationX && PeaceFishLocationY == LocationY) {
				SwimDirection = 7;
				LocationX = LocationX - 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}
			else if (PeaceFishLocationX < LocationX && PeaceFishLocationY < LocationY) {
				SwimDirection = 8;
				LocationX = LocationX - 2;
				LocationY = LocationY - 2;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
			}

		}

	}

	 void PeaceFishAnimation() {
		 if (NearDeath == false) {
			 AnimationIndex++;
			 if (SwimDirection == 1) {
				 if (AnimationIndex == 10) {
					 if (LifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\1AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\1A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\1AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\1B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\1AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\1C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
			 else if (SwimDirection == 2) {
				 if (AnimationIndex == 10) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\2AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\2A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\2BH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\2B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\2CH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\2C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
			 else if (SwimDirection == 3) {
				 if (AnimationIndex == 10) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\3AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\3A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\3BH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\3B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\3CH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\3C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
			 else if (SwimDirection == 4) {
				 if (AnimationIndex == 10) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\4AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\4A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\4BH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\4B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\4CH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\4C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
			 else if (SwimDirection == 5) {
				 if (AnimationIndex == 10) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\5AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\5A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 700) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\5BH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\5B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\5CH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\5C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
			 else if (SwimDirection == 6) {
				 if (AnimationIndex == 10) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\6AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\6A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\6BH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\6B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\6CH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\6C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
			 else if (SwimDirection == 7) {
				 if (AnimationIndex == 10) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\7AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\7A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\7BH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\7B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\7CH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\7C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
			 else if (SwimDirection == 8) {
				 if (AnimationIndex == 10) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\8AH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\8A.png");
					 }
				 }
				 else if (AnimationIndex == 20) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\8BH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\8B.png");
					 }
				 }
				 else if (AnimationIndex == 30) {
					 if (OverallLifeTime > 900) {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\8CH.png");
					 }
					 else {
						 PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\8C.png");
					 }
				 }
				 else if (AnimationIndex == 40) {
					 AnimationIndex = 0;
				 }
			 }
		 }
	}
	bool GetNearDeath() {
		return NearDeath;
	}

};

//класс-наследник
public ref class AngryFish : public Fish {
private:
	int PeaceFishTrackX;
	int PeaceFishTrackY;
	int AngryRange;
	int Engage;
	bool PeaceFishFoodDone;
	bool EventEngage;
	////под вопросом/////
	bool RangeCalculated;
	PeaceFish^PeaceFishObject1;
	PeaceFish^PeaceFishObject2;
	PeaceFish^PeaceFishObject3;
	PeaceFish^PeaceFishObject4;
	PeaceFish^TargetPeaceFish;
	AngryFish^AnotherAngryFish1;
	AngryFish^AnotherAngryFish2;
	AngryFish^AnotherAngryFish3;
	bool PeaceFishEaten = false;
	bool LampActive;
	int NumberOfPeaceFish;
	bool AngryFishCreated;
	int downY;
	int upY;
	int RangeToAngryFish1;
	int RangeToAngryFish2;
	int RangeToAngryFish3;
	bool CPF1Create;
	bool CPF2Create;
	bool CPF3Create;
	bool CPF4Create;
	int NumberOfVictim;
	Timer^EventTimer;
	bool CPF1ready;
	bool CPF2ready;
	bool CPF3ready;
	bool CPF4ready;
	bool SpotFood;
	int FishFoodX;
	int FishFoodY;
	bool AngryFishEngage;
	bool FishFoodDone;
	int AngryFishSec;
	int Waiting;
	int LifeTime = 500;
	bool PF1NearDeathClass;
	bool PF2NearDeathClass;
	bool PF3NearDeathClass;
	bool PF4NearDeathClass;
	bool NearDeath;
	int CurrentHungry;
	int NewLifeTime;
	bool StartEngage = false;

public:

	delegate void PeaceFishEatenAdvanced_Handler(bool status);
	event PeaceFishEatenAdvanced_Handler^ PeaceFishEatenAdvanced_Event;

	delegate void FishLifeEndAdvanced_Handler(bool status);
	event FishLifeEndAdvanced_Handler^ FishLifeEndAdvanced_Event;

	delegate void PeaceFishSetPanicAdvanced_Handler(bool status);
	event PeaceFishSetPanicAdvanced_Handler^ PeaceFishSetPanicAdvanced_Event;

	void EventRangeCalculated(bool artStatus) {
		RangeCalculated = artStatus;
	}
	
	void WaitingTick() {
		if (Waiting > 0) {
			Waiting = Waiting - 1;
	
		}
	}
	void AngryFishEatPeaceFish(bool Status) {
		//T->Enabled = 1;

	}
	AngryFish(int ArgLocationX, int ArgLocationY, int ArgLifeSpan, int ArgLifeTime, int ArgHungry, PictureBox^PB, int ArgAngryRange, PeaceFish^ArgPeaceFish1, PeaceFish^ArgPeaceFish2, PeaceFish^ArgPeaceFish3, PeaceFish^ArgPeaceFish4, AngryFish^ArgAnotherAngryFish1, AngryFish^ArgAnotherAngryFish2, AngryFish^ArgAnotherAngryFish3, bool  ArgPeaceFishObjectExist, bool ArgAngryFishObjectExist, bool ArgFishFoodObjectExist, Timer^EventTimer) :Fish(ArgLocationX, ArgLocationY, ArgLifeSpan, ArgLifeTime, ArgHungry, PB) {
		LocationX = ArgLocationX;
		LocationY = ArgLocationY;
		LifeSpan = ArgLifeSpan;
		LifeTime = ArgLifeTime;
		Hungry = ArgHungry;
		PbContainer = PB;
		SwimDirection = 5;
		AngryRange = ArgAngryRange;
		AnimationIndex = 5;
		Engage = false;
		PeaceFishObject1 = ArgPeaceFish1;
		PeaceFishObject2 = ArgPeaceFish2;
		PeaceFishObject3 = ArgPeaceFish3;
		PeaceFishObject4 = ArgPeaceFish4;
		AnotherAngryFish1 = ArgAnotherAngryFish1;
		AnotherAngryFish2 = ArgAnotherAngryFish2;
		AnotherAngryFish3 = ArgAnotherAngryFish3;
		PeaceFishObjectExist = ArgPeaceFishObjectExist;
		AngryFishObjectExist = ArgAngryFishObjectExist;
		FishFoodObjectExist = ArgAngryFishObjectExist;
		PeaceFishTrackX = 0;
		PeaceFishTrackY = 0;
		PeaceFishEaten = false;
		NumberOfPeaceFish = 0;
		downY = -100;
		upY = 200;
		AngryFishCreated = false;
		CPF1Create = false;
		CPF2Create = false;
		CPF3Create = false;
		CPF4Create = false;

	}
	~AngryFish() {
		LocationX;
		LocationY;
		LifeSpan;
		LifeTime;
		Hungry;
		PbContainer;
		SwimDirection;
		AngryRange;
		AnimationIndex;
		Engage;
		PeaceFishObjectExist;
		AngryFishObjectExist;
		FishFoodObjectExist;
		PeaceFishTrackX;
		PeaceFishTrackY;
	}
	
	property int  Property_NumberOfPeaceFish
	{
		int get()
		{
			return NumberOfPeaceFish;
		}
	
	}
	property bool Property_Engage
	{
		bool get()
		{
			return Engage;
		}
		void set(bool Status)
		{
			Engage = Status;
		}
	}
	property bool Property_AngryFishCreated
	{
		bool get()
		{
			return AngryFishCreated;
		}

	}
	property int Property_Waiting {
		int get()
		{
			return Waiting;
		}
		void set(int CurrentWaiting)
		{
			Waiting = CurrentWaiting;
		}
	}
	property bool Property_NearDeath
	{
		bool get()
		{
			return NearDeath;
		}
		void set(bool Status)
		{
			NearDeath = Status;
		}
	}


	void EventAngryFishEngage(bool Status) {
		Status = true;
	}

	void Set_Engage(bool Status) {
		Engage = Status;
	}

	bool Get_CPF1Create() {
		return CPF1Create;
	}

	void Set_CPF1Create(bool Status) {
		 CPF1Create = Status;
	}

	bool Get_CPF2Create() {
		return CPF2Create;
	}

	bool Get_CPF3Create() {
		return CPF3Create;
	}

	bool Get_CPF4Create() {
		return CPF4Create;
	}

	void LifeTimeTick() {
		if (LifeTime > 0) {
			LifeTime = LifeTime - 1;
		}
	}

	int GetLifeTime() {
		return LifeTime;
	}

	int Get_NumberOfVictim() {
		return NumberOfVictim;
	}

	void SetLifeTime(int ArgLifeTime) {
		LifeTime = ArgLifeTime;
	}

	void UpdateAllLocations(int APF1_X, int APF1_Y, int APF2_X, int APF2_Y, int APF3_X, int APF3_Y, int APF4_X, int APF4_Y, int AAF1_X, int AAF1_Y, int AAF2_X, int AAF2_Y, int AAF3_X, int AAF3_Y, bool PF1ND, bool PF2ND, bool PF3ND, bool PF4ND) {
		PF1NearDeathClass = PF1ND;
		PF2NearDeathClass = PF2ND;
		PF3NearDeathClass = PF3ND;
		PF4NearDeathClass = PF4ND;
		CPF1X = APF1_X;
		CPF1Y = APF1_Y;
		CPF2X = APF2_X;
		CPF2Y = APF2_Y;
		CPF3X = APF3_X;
		CPF3Y = APF3_Y;
		CPF4X = APF4_X;
		CPF4Y = APF4_Y;
		CAF1X = AAF1_X;
		CAF1Y = AAF1_Y;
		CAF2X = AAF2_X;
		CAF2Y = AAF2_Y;
		CAF3X = AAF3_X;
		CAF3Y = AAF3_Y;

	}
	
	void GetCreateStatus(bool first, bool second, bool third, bool fouth) {
		CPF1Create = first;
		CPF2Create = second;
		CPF3Create = third;
		CPF4Create = fouth;
	}

	int GetHungry() {
		return Hungry;

	}

	bool GetPeaceFishEaten() {
		return PeaceFishEaten;
	}

	void CheckNomralFishExist(bool Check) {
		PeaceFishObjectExist = Check;
	}

	void TrackPeaceFishXY(int X, int Y) {
		PeaceFishTrackX = X;
		PeaceFishTrackY = Y;
	}

	int CalculateRange(int x, int y) {
		int Xer = abs(LocationX - x);
		int Yer = abs(LocationY - y);
		int ActualRange = ceil(sqrt(pow(Xer, 2) + pow(Yer, 2)));
		//EventRangeCalculated(EventRangeCalculated);
		return ActualRange;

	}

	void SearchForFish() {
		if (PeaceFishObjectExist == true) {
			int PeaceFishLocationX = PeaceFishTrackX;
			int PeaceFishLocationY = PeaceFishTrackY;
			int Xer = abs(LocationX - PeaceFishLocationX);
			int Yer = abs(LocationY - PeaceFishLocationY);
			int ActualRange = ceil(sqrt(pow(Xer, 2) + pow(Yer, 2)));
			if (ActualRange < 1000 && ActualRange > 50) {
				Engage = true;
			}
			else if (ActualRange <= 50) {
				Hungry = 550;
				PeaceFishEaten = true;
				Engage = false;
			}
			else {
				Engage = false;
			}


		}

	}

	void ChaseEnd() {
		if (NumberOfVictim == 1 && (CalculateRange(CPF1X, CPF1Y) < 10)) {
			Engage = false;
			CPF1Create = false;
			CPF1X = 200;
			CPF1Y = -100;
		
			
		
		}

		if (NumberOfVictim == 2 && (CalculateRange(CPF2X, CPF2Y) < 10)) {
			Engage = false;
			CPF2X = 200;
			CPF2Y = -100;
			CPF2Create = false;
		
		
		}

		if (NumberOfVictim == 3 && (CalculateRange(CPF3X, CPF3Y) < 10)) {
			Engage = false;
			CPF3X = 200;
			CPF3Y = -100;
			CPF3Create = false;
			Engage = false;
			
		}

		if (NumberOfVictim == 4 && (CalculateRange(CPF4X, CPF4Y) < 10)) {
			Engage = false;
			CPF4X = 200;
			CPF4Y = -100;
			CPF4Create = false;
			Engage = false;
			
		}
	}

	void SmartSearchForFish() {
		if (NumberOfVictim == 4 && CPF4Create == false) {
			Engage = false;
		}
		if (NumberOfVictim == 3 && CPF3Create == false) {
			Engage = false;
		}
		if (NumberOfVictim == 2 && CPF2Create == false) {
			Engage = false;
		}
		if (NumberOfVictim == 1 && CPF1Create == false) {
			Engage = false;
		}
		int MinRange;
		int TempRange1;
		int TempRange2;
		int TempRange3;
		int TempRange4;
			if (AngryFishCreated == true && Engage == false && CurrentHungry > 200) {
			
				if (NumberOfVictim == 4 && CPF4Create == false) {
					NumberOfVictim = 3;
				}
				else if (NumberOfVictim == 3 && CPF3Create == false) {
					NumberOfVictim = 2;
				}
				else if (NumberOfVictim == 3 && CPF3Create == false) {
					NumberOfVictim = 2;
				}
				else if (NumberOfVictim == 2 && CPF2Create == false) {
					NumberOfVictim = 1;
				}
				if (CPF4Create == true && StartEngage == false && PF4NearDeathClass == false) {
					StartEngage = true;
					TempRange4 = CalculateRange(CPF4X, CPF4Y);
					MinRange = TempRange4;
					NumberOfVictim = 4;
					if (CurrentHungry > 200) {
						Engage = true;
						PeaceFishSetPanicAdvanced_Event(true);

					}
				}
				if (CPF3Create == true && Engage == false && PF3NearDeathClass == false) {
					StartEngage = true;
					TempRange3 = CalculateRange(CPF3X, CPF3Y);
					MinRange = TempRange3;
					NumberOfVictim = 3;
				
					if (CurrentHungry > 200) {
						Engage = true;
						
						PeaceFishSetPanicAdvanced_Event(true);
					}
				}
				 if (CPF2Create == true && Engage == false && PF2NearDeathClass == false) {
					 StartEngage = true;
					TempRange2 = CalculateRange(CPF2X, CPF2Y);
					MinRange = TempRange2;
					NumberOfVictim = 2;
					
					if (CurrentHungry > 200) {
						Engage = true;
						
						PeaceFishSetPanicAdvanced_Event(true);
					}
				}
				 if (CPF1Create == true && Engage == false && PF1NearDeathClass == false) {
					 StartEngage = true;
					TempRange1 = CalculateRange(CPF1X, CPF1Y);
					MinRange = TempRange1;
					NumberOfVictim = 1;
					
					if (CurrentHungry > 200) {
						Engage = true;
						
						PeaceFishSetPanicAdvanced_Event(true);
					}
				}
				 if (MinRange > 1 && MinRange != 0 && MinRange < 8000) {
					/* EventAngryFishEngage(Engage);
					 Engage = true;*/
				}
			}
			else if (MinRange <= 50) {
				Engage = false;
				
			
		}
		}
	void PursuitMove(PeaceFish^ObjectFish) {
		if (Engage == true) {
			//ChaseEnd();
			int PeaceFishLocationX;
			int PeaceFishLocationY;
			if (NumberOfVictim == 1) {
				PeaceFishLocationX = CPF1X;
				PeaceFishLocationY = CPF1Y;
			//	CurrentHungry = 0;
			}
			else if (NumberOfVictim == 2) {
				PeaceFishLocationX = CPF2X;
				PeaceFishLocationY = CPF2Y;
				//CurrentHungry = 0;
			}
			else if (NumberOfVictim == 3) {
				PeaceFishLocationX = CPF3X;
				PeaceFishLocationY = CPF3Y;
				//CurrentHungry = 0;
			}
			else if (NumberOfVictim == 4) {
				PeaceFishLocationX = CPF4X;
				PeaceFishLocationY = CPF4Y;
		//		CurrentHungry = 0;
			}
			if (PeaceFishLocationX == 9000 && PeaceFishLocationY == 9000) {
				Engage = false;
			}
			if ( CPF1Create == true && Engage == true && (CalculateRange(PeaceFishLocationX, PeaceFishLocationY) < 30)) {
				PeaceFishEatenAdvanced_Event(true);
			}
			if (PeaceFishLocationX != 9000 && PeaceFishLocationY != 9000 && Engage == true) {
				if (PeaceFishLocationX == LocationX && PeaceFishLocationY < LocationY) {
					SwimDirection = 1;
					LocationY = LocationY - 6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
				else if (PeaceFishLocationX > LocationX && PeaceFishLocationY < LocationY) {
					SwimDirection = 2;
					LocationX = LocationX + 6;
					LocationY = LocationY -6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
				else if (PeaceFishLocationX > LocationX && PeaceFishLocationY == LocationY) {
					SwimDirection = 3;
					LocationX = LocationX + 6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
				else if (PeaceFishLocationX > LocationX && PeaceFishLocationY > LocationY) {
					SwimDirection = 4;
					LocationX = LocationX + 6;
					LocationY = LocationY + 6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
				else if (PeaceFishLocationX == LocationX && PeaceFishLocationY > LocationY) {
					SwimDirection = 5;
					LocationY = LocationY + 6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
				else if (PeaceFishLocationX < LocationX && PeaceFishLocationY > LocationY) {
					SwimDirection = 6;
					LocationX = LocationX - 6;
					LocationY = LocationY + 6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
				else if (PeaceFishLocationX < LocationX && PeaceFishLocationY == LocationY) {
					SwimDirection = 7;
					LocationX = LocationX - 6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
				else if (PeaceFishLocationX < LocationX && PeaceFishLocationY < LocationY) {
					SwimDirection = 8;
					LocationX = LocationX - 6;
					LocationY = LocationY - 6;
					PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				}
			}
			else {
				Engage = false;
			
			}
		}

	}
	void AngryFishMove() {
		CurrentHungry++;
	
		if (LifeTime == 0) {
			NearDeath = true;
			
		}


		if (AngryFishCreated == false && NearDeath == false) {
			downY = downY + 2;
			if (downY < 200) {
				PbContainer->Location = System::Drawing::Point(950, downY);
			}
			else if (upY > 295) {
				upY = upY - 2;
				PbContainer->Location = System::Drawing::Point(950, upY);
			}
			else {
				AngryFishCreated = true;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				if (CPF1Create == true)
				{
					CPF1ready = true;
				}
				if (CPF2Create == true) {
					CPF2ready = true;
				}
				if (CPF3Create == true) {
					CPF3ready = true;
				}
				if (CPF4Create == true) {
					CPF4ready = true;
				}
			}
		}
		if (NearDeath == true) {
			if (LocationY > 70) {
				LocationY = LocationY - 1;
				PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
				PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\AFD.png");
			}
			else {
				FishLifeEndAdvanced_Event(false);
			}
		}
		else if (AngryFishCreated == true && NearDeath == false) {
		
			
		
			if (Engage == false) {
				NewLifeTime++;
				srand(time(0));
				if (NewLifeTime == 5) {
					SwimDirection = rand() % 8 + 1;
					
				}
		
				int AfterX;
				int AfterY;
				RangeToAngryFish1 = CalculateRange(CAF1X + 40, CAF1Y - 40);
				RangeToAngryFish2 = CalculateRange(CAF2X + 40, CAF2Y - 40);
				RangeToAngryFish3 = CalculateRange(CAF3X + 40, CAF3Y - 40);
				if (RangeToAngryFish1 < 110 || RangeToAngryFish2 < 110 || RangeToAngryFish3 < 110) {
					if (SwimDirection < 4) {
						SwimDirection = SwimDirection + 4;
					}
					else if (SwimDirection == 5) {
						SwimDirection = 1;
					}
					else if (SwimDirection == 6) {
						SwimDirection = 2;
					}
					else if (SwimDirection == 7) {
						SwimDirection = 3;
					}
					else if (SwimDirection == 8) {
						SwimDirection = 4;
					}
				}
				if (SwimDirection == 1) {
					LocationY = LocationY - 1;
					AfterY = LocationY;
					if ((LocationX > 320 && LocationX < 1000 && LocationY > 150 && LocationY < 620)) {
						//	if ((abs(LocationY - CAF1Y) > 60 && LocationX != CAF1X) || ((abs(LocationY - CAF2Y) > 60 && LocationX != CAF2X)||((abs(LocationY - CAF3Y) > 60 && LocationX != CAF3X)))) {

						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						//	}
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationY = LocationY + 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 2) {

					AfterX = LocationX;
					AfterY = LocationY;
					LocationX = LocationX + 1;
					LocationY = LocationY - 1;
					if (LocationX >= 320 && LocationX <= 1000 && LocationY >= 150 && LocationY < 620) {
						
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationX = LocationX - 3;
						LocationY = LocationY + 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 3) {

					AfterX = LocationX;
					LocationX = LocationX + 1;
					if (LocationX >= 320 && LocationX <= 1000 && LocationY >= 150 && LocationY < 620) {
						//if ((abs(LocationX - CAF1X) > 60 && LocationY != CAF1Y) || (abs(LocationX - CAF2X)> 60 && LocationY != CAF2Y) || (abs(LocationX - CAF3X)> 60 && LocationY != CAF3Y)) {

						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						//}
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationX = LocationX - 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 4) {
					AfterX = LocationX;
					AfterY = LocationY;
					LocationX = LocationX + 1;
					LocationY = LocationY + 1;
					if (LocationX >= 320 && LocationX <= 1000 && LocationY >= 150 && LocationY < 620) {
						//if ((LocationX < CAF1X - 80 && LocationY < CAF1Y - 80) || (LocationX < CAF2X - 80 && LocationY < CAF2Y - 80) || (LocationX < CAF3X - 80 && LocationY < CAF3Y - 80)) {

						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						//}
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationX = LocationX - 3;
						LocationY = LocationY - 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 5) {
					AfterY = LocationY;
					LocationY = LocationY + 1;
					if (LocationX >= 320 && LocationX <= 1000 && LocationY >= 150 && LocationY < 620) {
						

						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationY = LocationY - 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}

				}
				else if (SwimDirection == 6) {
					AfterX = LocationX;
					AfterY = LocationY;
					LocationX = LocationX - 1;
					LocationY = LocationY + 1;
					if (LocationX >= 320 && LocationX <= 1000 && LocationY >= 150 && LocationY < 620) {
						//if ((LocationY < CAF1Y - 80 && LocationX < CAF1X - 80) || (LocationY < CAF2Y - 80 && LocationX < CAF2X - 80) || (LocationY < CAF3Y - 80 && LocationX < CAF3X - 80)) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						//}
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationX = LocationX + 3;
						LocationY = LocationY - 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 7) {
					AfterX = LocationX;
					LocationX = LocationX - 1;
					if (LocationX >= 320 && LocationX <= 1000 && LocationY >= 150 && LocationY < 620) {
						//if ((LocationX < CAF1X - 80 && LocationY != CAF1Y) || (LocationX < CAF2X - 80 && LocationY != CAF2Y) || (LocationX < CAF3X - 80 && LocationY != CAF3Y)) {
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						//}
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationX = LocationX + 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				else if (SwimDirection == 8) {
					AfterX = LocationX;
					AfterY = LocationY;
					LocationX = LocationX - 1;
					LocationY = LocationY - 1;
					if (LocationX >= 320 && LocationX <= 1000 && LocationY >= 150 && LocationY >= 620) {
						//if ((LocationY < CAF1Y + 80 && LocationX < CAF1X - 80) || (LocationY < CAF2Y + 80 && LocationX < CAF2X - 80) || (LocationY < CAF3Y + 80 && LocationX < CAF3X - 80)) {

						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
						//	}
					}
					else {
						SwimDirection = rand() % 8 + 1;
						LocationX = LocationX + 3;
						LocationY = LocationY + 3;
						PbContainer->Location = System::Drawing::Point(LocationX, LocationY);
					}
				}
				if (NewLifeTime == 200) {
					NewLifeTime = 0;
					Engage = false;
				}
			}
			else if (Engage == true) {
				if (NumberOfVictim == 1 && CurrentHungry > 600) {
					PursuitMove(PeaceFishObject1);
					
				}
				else if (NumberOfVictim == 2 && CurrentHungry > 600) {
					PursuitMove(PeaceFishObject2);
					
				}
				else if (NumberOfVictim == 3 && CurrentHungry > 600) {
					PursuitMove(PeaceFishObject3);
				
				}
				else if (NumberOfVictim == 4 && CurrentHungry > 600) {
					PursuitMove(PeaceFishObject4);
			
				}

			}

			

		}
		
	}
	void AngryFishAnimation() {
		AnimationIndex++;
		if (NearDeath == false) {
			if (SwimDirection == 1) {
				if (AnimationIndex == 10) {
					if (LifeTime < 150) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A1AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A1A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A1BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A1B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A1CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A1C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
				}
			}
			else if (SwimDirection == 2) {
				if (AnimationIndex == 10) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A2AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A2A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A2BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A2B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A2CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A2C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
				}
			}
			else if (SwimDirection == 3) {
				if (AnimationIndex == 10) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A3AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A3A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A3BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A3B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A3CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A3C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
				}
			}
			else if (SwimDirection == 4) {
				if (AnimationIndex == 10) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A4AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A4A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A4BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A4B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A4CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A4C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
				}
			}
			else if (SwimDirection == 5) {
				if (AnimationIndex == 10) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A5AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A5A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A5BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A5B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A5CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A5C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
				}
			}
			else if (SwimDirection == 6) {
				if (AnimationIndex == 10) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A6AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A6A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A6BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A6B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A6CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A6C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
					Engage = false;
				}
			}
			else if (SwimDirection == 7) {
				if (AnimationIndex == 10) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A7AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A7A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A7BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A7B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A7CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A7C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
				}
			}
			else if (SwimDirection == 8) {
				if (AnimationIndex == 10) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A8AH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A8A.png");
					}
				}
				else if (AnimationIndex == 20) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A8BH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A8B.png");
					}
				}
				else if (AnimationIndex == 30) {
					if (LifeTime < 300) {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A8CH.png");
					}
					else {
						PbContainer->Image = Image::FromFile(Application::StartupPath + "\\Pic\\A8C.png");
					}
				}
				else if (AnimationIndex == 40) {
					AnimationIndex = 0;
				}
			}
		}
	}
	void AllAngryFishLeft(PictureBox^PB1, PictureBox^PB2, PictureBox^PB3, PictureBox^PB4) {
		PB1->Visible = 0;
		PB2->Visible = 0;
		PB3->Visible = 0;
		PB4->Visible = 0;

	}

	void Set_Hungry(int Arg) {
		Hungry = Arg;
	}
	void MainHandler() {
		if (CPF1Create == false && NumberOfVictim == 1) {
			Engage = false;
			StartEngage = false;
		}
		if (CPF2Create == false && NumberOfVictim == 2) {
			Engage = false;
			StartEngage = false;
		}
		if (CPF3Create == false && NumberOfVictim == 3) {
			Engage = false;
			StartEngage = false;
		}
		if (CPF4Create == false && NumberOfVictim == 4) {
			Engage = false;
			StartEngage = false;
		}
		CurrentHungry++;
		AngryFishMove();
		AngryFishAnimation();
		LifeTimeTick();
		WaitingTick();
		SmartSearchForFish();
	}

};




