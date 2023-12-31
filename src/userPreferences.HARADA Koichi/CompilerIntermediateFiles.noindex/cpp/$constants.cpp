#include "$asm4d.h"
#include "cp4drt_shared.h"
#include "legacy_language_types.h"
Txt K;
Txt KProgress;
Txt K_20_2F_20;
Txt K_30_BF_30_A4_30_C8_30_EB;
Txt Kbutton;
Txt KbuttonEnabled;
Txt Kcanceled;
Txt KfontName;
Txt KfontSize;
Txt Kmessage;
Txt Kname;
Txt Knew;
Txt Kprogress;
Txt Kstart;
Txt Kstop;
Txt Ktest;
Txt Ktitle;
Txt kREUXtvmddvA;
Txt kazfZ5BZmhMM;
Txt kg3ucq3_wCMA;
Txt ku3NglOb8H5A;

struct Txt_info { Txt *t; const char16_t *s; size_t n;};
static const Txt_info constants[]=
{
	{&K,nullptr,0},
	{&KProgress,u"Progress",8},
	{&K_20_2F_20,u" / ",3},
	{&K_30_BF_30_A4_30_C8_30_EB,u"\x30bf\x30a4\x30c8\x30eb",4},
	{&Kbutton,u"button",6},
	{&KbuttonEnabled,u"buttonEnabled",13},
	{&Kcanceled,u"canceled",8},
	{&KfontName,u"fontName",8},
	{&KfontSize,u"fontSize",8},
	{&Kmessage,u"message",7},
	{&Kname,u"name",4},
	{&Knew,u"new",3},
	{&Kprogress,u"progress",8},
	{&Kstart,u"start",5},
	{&Kstop,u"stop",4},
	{&Ktest,u"test",4},
	{&Ktitle,u"title",5},
	{&kREUXtvmddvA,u"The title property must be object type.",39},
	{&kazfZ5BZmhMM,u"Missing 'name' parameter.",25},
	{&kg3ucq3_wCMA,u"The fontSize property must be text type.",40},
	{&ku3NglOb8H5A,u"The fontSize property must be integer type.",43},
	{nullptr,nullptr,0}
};

void InitConstants()
{
	for( const Txt_info *i = constants ; i->t != nullptr; ++i)
		g->AssignUniChars(i->t->cv(),i->s,i->n);
}

void DeInitConstants()
{
	for( const Txt_info *i = constants ; i->t != nullptr; ++i)
		i->t->setNull();
}
