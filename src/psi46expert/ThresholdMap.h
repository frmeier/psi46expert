// Trim functions

#ifndef THRESHOLDMAP
#define THRESHOLDMAP

#include <TH2D.h>
#include "TestRoc.h"
#include "TestRange.h"

class ThresholdMap
{

public:
	ThresholdMap();
	
	TH2D* GetMap(const char * mapName, TestRoc * roc, TestRange * testRange, int nTrig);
// 	bool CheckMap();
	void MeasureMap(const char * mapName, TestRoc * roc, TestRange * testRange, int nTrig);
	void SetParameters(const char * mapName);
	void SetCals();
	void SetXTalk();
	void SetDoubleWbc();
	void SetSingleWbc();
	void SetReverseMode();
		
protected:

	TH2D *histo;
	int dacReg;
	bool cals, reverseMode, xtalk, doubleWbc;

};


#endif

