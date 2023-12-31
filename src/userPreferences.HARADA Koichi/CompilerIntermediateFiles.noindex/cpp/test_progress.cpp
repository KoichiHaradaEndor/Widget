extern Txt KProgress;
extern Txt K_20_2F_20;
extern Txt K_30_BF_30_A4_30_C8_30_EB;
extern Txt KbuttonEnabled;
extern Txt Kcanceled;
extern Txt Kmessage;
extern Txt Knew;
extern Txt Kprogress;
extern Txt Kstart;
extern Txt Kstop;
extern Txt Ktest;
extern Txt Ktitle;
extern unsigned char D_proc_TEST__PROGRESS[];
void proc_TEST__PROGRESS( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_TEST__PROGRESS);
	if (!ctx->doingAbort) {
		Long v0;
		Long v1;
		Long li;
		Obj lprogress__o;
		Long lmax__l;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1710)) goto _0;
			Variant t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv(),KProgress.cv(),Long(56).cv()},3,1496)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Knew.cv(),Ktest.cv()},3,1498)) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			lprogress__o=t3.get();
		}
		c.f.fLine=5;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Kstart.cv()},2,1500)) goto _0;
		g->Check(ctx);
		{
			Bool t4;
			t4=Bool(1).get();
			c.f.fLine=6;
			if (g->SetMember(ctx,lprogress__o.cv(),KbuttonEnabled.cv(),t4.cv())) goto _0;
		}
		c.f.fLine=8;
		if (g->SetMember(ctx,lprogress__o.cv(),Ktitle.cv(),K_30_BF_30_A4_30_C8_30_EB.cv())) goto _0;
		lmax__l=100000;
		li=1;
		v0=lmax__l.get();
		goto _2;
_4:
		{
			Num t5;
			t5=li.get();
			Num t6;
			t6=lmax__l.get();
			Num t7;
			t7=t5.get()/t6.get();
			c.f.fLine=11;
			if (g->SetMember(ctx,lprogress__o.cv(),Kprogress.cv(),t7.cv())) goto _0;
		}
		{
			Txt t8;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t8.cv(),li.cv()},1,10)) goto _0;
			Txt t9;
			g->AddString(t8.get(),K_20_2F_20.get(),t9.get());
			Txt t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),lmax__l.cv()},1,10)) goto _0;
			Txt t11;
			g->AddString(t9.get(),t10.get(),t11.get());
			if (g->SetMember(ctx,lprogress__o.cv(),Kmessage.cv(),t11.cv())) goto _0;
		}
		{
			Long t12;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,322)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t12.cv(),Num(5).cv()},2,323)) goto _0;
		}
		{
			Variant t13;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t13.cv(),lprogress__o.cv(),Kcanceled.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Bool t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			if (!(t14.get())) goto _6;
		}
		goto _5;
_6:
_3:
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _4;
_5:
		c.f.fLine=19;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Kstop.cv()},2,1500)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	}

}
