#ifndef MOD_SPECIFICATIONS_H
#define MOD_SPECIFICATIONS_H

//Simple struct to gather various modspecifications in one place.
//Feel free to improve.
struct CModSpecifications
{
	//NOTE: If changing order, update all initializations below.
	char fileExtension[10];
	UINT patternsMax;
	UINT ordersMax;
	UINT channelsMin;
	UINT channelsMax;
	UINT tempoMin;
	UINT tempoMax;
	UINT patternRowsMin;
	UINT patternRowsMax;
	UINT modNameLengthMax;
	UINT samplesMax;
	UINT instrumentsMax;
};

enum {
	max_chans_IT=127,
	max_chans_XM=64,
	max_chans_MOD=32,
	max_chans_S3M=32,
};

const CModSpecifications MPTM_SPECS =
{
	/*
	TODO: Proper, less arbitrarily chosen, values here.
	NOTE: If changing limits, see whether:
			-savefile format and GUI methods can handle new values.
	 */
	"MPTm",								//File extension
	65000,								//Pattern max.
	65000,								//Order max.
	4,									//Channel min
	256,								//Channel max
	32,									//Min tempo
	512,								//Max tempo
	2,									//Min pattern rows
	1024,								//Max pattern rows
    100,								//Max mod name length
	4000,								//SamplesMax
	256,								//instrumentMax
};



/*
const CModSpecifications MOD_TYPE_MOD =
{
	"mod",

};

const CModSpecifications MOD_TYPE_XM =
{
	"xm",

};

const CModSpecifications MOD_TYPE_IT =
{
	"it",
};
*/



#endif
