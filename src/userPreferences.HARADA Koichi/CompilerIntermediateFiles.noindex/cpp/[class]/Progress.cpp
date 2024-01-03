extern unsigned char D_proc_Progress_2EsetCoordinates[];
void proc_Progress_2EsetCoordinates( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2EsetCoordinates);
	if (!ctx->doingAbort) {
		{
			Bool t1;
			t1=Bool(0).get();
			Long t2;
			c.f.fLine=2;
			t2=Parm<Long>(ctx,inParams,inNbParam,2).get();
			Long t3;
			t3=Parm<Long>(ctx,inParams,inNbParam,1).get();
			Bool t4;
			t4=Bool(1).get();
			if (g->CallComponent(glob,ctx,4,0,3,4,(PCV[]){nullptr,t4.cv(),t3.cv(),t2.cv(),t1.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Ehide[];
void proc_Progress_2Ehide( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Ehide);
	if (!ctx->doingAbort) {
		{
			Long t0;
			t0=0;
			Long t1;
			t1=0;
			Bool t3;
			t3=Bool(0).get();
			Bool t4;
			t4=Bool(0).get();
			c.f.fLine=2;
			if (g->CallComponent(glob,ctx,4,0,1,4,(PCV[]){nullptr,t4.cv(),t0.cv(),t1.cv(),t3.cv()})) goto _0;
		}
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Eget_20errorEventListener[];
void proc_Progress_2Eget_20errorEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20errorEventListener);
	if (!ctx->doingAbort) {
		Txt lmethodName__t;
		new ( outResult) Txt();
		{
			Txt t0;
			c.f.fLine=4;
			if (g->CallComponent(glob,ctx,4,1,0,0,(PCV[]){t0.cv()})) goto _0;
			lmethodName__t=t0.get();
		}
		c.f.fLine=6;
		Res<Txt>(outResult)=lmethodName__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Eset_20errorEventListener[];
void proc_Progress_2Eset_20errorEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20errorEventListener);
	if (!ctx->doingAbort) {
		{
			Txt t0;
			c.f.fLine=6;
			t0=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			if (g->CallComponent(glob,ctx,4,2,1,1,(PCV[]){nullptr,t0.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Estop[];
void proc_Progress_2Estop( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Estop);
	if (!ctx->doingAbort) {
		Txt lname__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Variant t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			g->Check(ctx);
			Txt t2;
			if (!g->GetValue(ctx,(PCV[]){t2.cv(),t1.cv(),nullptr})) goto _0;
			lname__t=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t5.get();
		}
		{
			Obj t6;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),Kprogress.cv(),t7.cv())) goto _0;
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Variant t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t7.cv(),t9.cv(),t10.cv())) goto _0;
			Bool t11;
			if (g->OperationOnAny(ctx,7,t10.cv(),Value_null().cv(),t11.cv())) goto _0;
			if (!(t11.get())) goto _2;
		}
		{
			Obj t12;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),Kprogress.cv(),t13.cv())) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t13.cv(),t15.cv(),t16.cv())) goto _0;
			Long t17;
			if (!g->GetValue(ctx,(PCV[]){t17.cv(),t16.cv(),nullptr})) goto _0;
			lid__l=t17.get();
		}
		{
			Long t18;
			t18=lid__l.get();
			c.f.fLine=11;
			if (g->CallComponent(glob,ctx,4,3,1,1,(PCV[]){nullptr,t18.cv()})) goto _0;
		}
		{
			Obj t19;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t19.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t20;
			if (g->GetMember(ctx,t19.cv(),Kprogress.cv(),t20.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t20.cv(),lname__t.cv()},2,1226)) goto _0;
		}
_2:
		{
			Obj t21;
			l__4D__auto__mutex__0=t21.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20stopEventListener[];
void proc_Progress_2Eset_20stopEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20stopEventListener);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Txt t17;
			c.f.fLine=8;
			t17=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,4,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20stopEventListener[];
void proc_Progress_2Eget_20stopEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20stopEventListener);
	if (!ctx->doingAbort) {
		Txt lmethodName__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,5,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lmethodName__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=lmethodName__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kmessage;
extern Txt Kname;
extern Txt Kprogress;
extern Txt Ktitle;
extern unsigned char D_proc_Progress_2EsetProgress[];
void proc_Progress_2EsetProgress( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2EsetProgress);
	if (!ctx->doingAbort) {
		Long lid__l;
		Long ltype__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Variant t15;
			c.f.fLine=16;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kprogress.cv(),t15.cv())) goto _0;
			Bool t16;
			if (g->OperationOnAny(ctx,7,t15.cv(),Value_null().cv(),t16.cv())) goto _0;
			if (!(t16.get())) goto _3;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t17;
			c.f.fLine=17;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kprogress.cv(),t17.cv())) goto _0;
			Long t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t17.cv()},1,1509)) goto _0;
			ltype__l=t18.get();
		}
		if (ctx->doingAbort) goto _0;
		{
			Bool t19;
			t19=1==ltype__l.get();
			Bool t20;
			t20=t19.get();
			if (t19.get()) goto _4;
			{
				t20=9==ltype__l.get();
			}
_4:
			if (!(t20.get())) goto _5;
		}
		{
			Variant t22;
			c.f.fLine=19;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kprogress.cv(),t22.cv())) goto _0;
			Bool t25;
			t25=Bool(0).get();
			Txt t23;
			Num t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),t22.cv(),nullptr})) goto _0;
			Long t27;
			t27=lid__l.get();
			if (g->CallComponent(glob,ctx,4,6,2,4,(PCV[]){nullptr,t27.cv(),t26.cv(),t23.cv(),t25.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_5:
_3:
		{
			Variant t28;
			c.f.fLine=22;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t28.cv())) goto _0;
			Bool t29;
			if (g->OperationOnAny(ctx,7,t28.cv(),Value_null().cv(),t29.cv())) goto _0;
			Bool t30;
			t30=t29.get();
			if (!(t29.get())) goto _6;
			{
				Variant t31;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t31.cv())) goto _0;
				Long t32;
				if (g->Call(ctx,(PCV[]){t32.cv(),t31.cv()},1,1509)) goto _0;
				t30=2==t32.get();
			}
			if (ctx->doingAbort) goto _0;
_6:
			if (!(t30.get())) goto _7;
		}
		{
			Variant t34;
			c.f.fLine=23;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t34.cv())) goto _0;
			Num t35;
			t35=0;
			Bool t38;
			t38=Bool(0).get();
			Txt t36;
			Txt t39;
			if (!g->GetValue(ctx,(PCV[]){t39.cv(),t34.cv(),nullptr})) goto _0;
			Long t40;
			t40=lid__l.get();
			if (g->CallComponent(glob,ctx,4,7,2,5,(PCV[]){nullptr,t40.cv(),t39.cv(),t35.cv(),t36.cv(),t38.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_7:
		{
			Variant t41;
			c.f.fLine=25;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t41.cv())) goto _0;
			Bool t42;
			if (g->OperationOnAny(ctx,7,t41.cv(),Value_null().cv(),t42.cv())) goto _0;
			Bool t43;
			t43=t42.get();
			if (!(t42.get())) goto _8;
			{
				Variant t44;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t44.cv())) goto _0;
				Long t45;
				if (g->Call(ctx,(PCV[]){t45.cv(),t44.cv()},1,1509)) goto _0;
				t43=2==t45.get();
			}
			if (ctx->doingAbort) goto _0;
_8:
			if (!(t43.get())) goto _9;
		}
		{
			Variant t47;
			c.f.fLine=26;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t47.cv())) goto _0;
			Bool t49;
			t49=Bool(0).get();
			Txt t50;
			if (!g->GetValue(ctx,(PCV[]){t50.cv(),t47.cv(),nullptr})) goto _0;
			Long t51;
			t51=lid__l.get();
			if (g->CallComponent(glob,ctx,4,8,2,3,(PCV[]){nullptr,t51.cv(),t50.cv(),t49.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_9:
_2:
		{
			Obj t52;
			l__4D__auto__mutex__0=t52.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20icon[];
void proc_Progress_2Eget_20icon( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20icon);
	if (!ctx->doingAbort) {
		Long lid__l;
		Pic licon__g;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Pic();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Pic t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,9,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			licon__g=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Pic>(outResult)=licon__g.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20buttonTitle[];
void proc_Progress_2Eset_20buttonTitle( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20buttonTitle);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Txt t17;
			c.f.fLine=8;
			t17=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,10,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20buttonTitle[];
void proc_Progress_2Eget_20buttonTitle( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20buttonTitle);
	if (!ctx->doingAbort) {
		Txt ltitle__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,11,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			ltitle__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=ltitle__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20icon[];
void proc_Progress_2Eset_20icon( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20icon);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Pic t17;
			c.f.fLine=14;
			t17=Parm<Pic>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,12,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20buttonEnabled[];
void proc_Progress_2Eset_20buttonEnabled( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20buttonEnabled);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Bool t17;
			c.f.fLine=8;
			t17=Parm<Bool>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,13,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20buttonEnabled[];
void proc_Progress_2Eget_20buttonEnabled( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20buttonEnabled);
	if (!ctx->doingAbort) {
		Bool lenabled__b;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Bool();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Bool t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,14,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lenabled__b=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Bool>(outResult)=lenabled__b.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20progress[];
void proc_Progress_2Eset_20progress( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20progress);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t17;
			t17=Bool(0).get();
			Txt t15;
			Num t18;
			c.f.fLine=8;
			t18=Parm<Num>(ctx,inParams,inNbParam,1).get();
			Long t19;
			t19=lid__l.get();
			if (g->CallComponent(glob,ctx,4,6,2,4,(PCV[]){nullptr,t19.cv(),t18.cv(),t15.cv(),t17.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t20;
			l__4D__auto__mutex__0=t20.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20progress[];
void proc_Progress_2Eget_20progress( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20progress);
	if (!ctx->doingAbort) {
		Num lprogress__r;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Num();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Num t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,15,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lprogress__r=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Num>(outResult)=lprogress__r.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20message[];
void proc_Progress_2Eget_20message( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20message);
	if (!ctx->doingAbort) {
		Long lid__l;
		Txt lmessage__t;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,16,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lmessage__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=lmessage__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20message[];
void proc_Progress_2Eset_20message( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20message);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Txt t17;
			c.f.fLine=8;
			t17=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,8,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Eshow[];
void proc_Progress_2Eshow( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eshow);
	if (!ctx->doingAbort) {
		{
			Long t0;
			t0=0;
			Long t1;
			t1=0;
			Bool t3;
			t3=Bool(0).get();
			Bool t4;
			t4=Bool(1).get();
			c.f.fLine=2;
			if (g->CallComponent(glob,ctx,4,0,1,4,(PCV[]){nullptr,t4.cv(),t0.cv(),t1.cv(),t3.cv()})) goto _0;
		}
_0:
_1:
;
	}

}
extern Txt K;
extern Txt Kbutton;
extern Txt KfontName;
extern Txt KfontSize;
extern Txt Kmessage;
extern Txt Ktitle;
extern Txt kREUXtvmddvA;
extern Txt kTDuAS3gJ9s8;
extern Txt kg3ucq3_wCMA;
extern unsigned char D_proc_Progress_2EsetGlobalAppearance[];
void proc_Progress_2EsetGlobalAppearance( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2EsetGlobalAppearance);
	if (!ctx->doingAbort) {
		Long lDO__NOT__MODIFY__l;
		Txt ltitleFontName__t;
		Txt lDO__NOT__MODIFY__t;
		Txt lbuttonFontName__t;
		Txt lmessageFontName__t;
		Long lbuttonFontSize__l;
		Long lmessageFontSize__l;
		Long ltitleFontSize__l;
		{
			Variant t0;
			c.f.fLine=20;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t0.cv())) goto _0;
			Bool t1;
			if (g->OperationOnAny(ctx,6,t0.cv(),Value_null().cv(),t1.cv())) goto _0;
			if (!(t1.get())) goto _3;
		}
		if (ctx->doingAbort) goto _0;
		goto _2;
_3:
		{
			Variant t2;
			c.f.fLine=22;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t2.cv())) goto _0;
			Long t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv()},1,1509)) goto _0;
			Bool t4;
			t4=38!=t3.get();
			if (!(t4.get())) goto _4;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t5;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t5.cv(),Kmessage.cv(),kREUXtvmddvA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t5.cv()},1,1805)) goto _0;
		}
		goto _2;
_4:
		{
			Variant t6;
			c.f.fLine=24;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t6.cv())) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),KfontSize.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			Bool t9;
			t9=t8.get();
			if (!(t8.get())) goto _5;
			{
				Variant t10;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t10.cv())) goto _0;
				Variant t11;
				if (g->GetMember(ctx,t10.cv(),KfontSize.cv(),t11.cv())) goto _0;
				Long t12;
				if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv()},1,1509)) goto _0;
				t9=9!=t12.get();
			}
			if (ctx->doingAbort) goto _0;
_5:
			Bool t14;
			t14=t9.get();
			if (!(t9.get())) goto _6;
			{
				Variant t15;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t15.cv())) goto _0;
				Variant t16;
				if (g->GetMember(ctx,t15.cv(),KfontSize.cv(),t16.cv())) goto _0;
				Long t17;
				if (g->Call(ctx,(PCV[]){t17.cv(),t16.cv()},1,1509)) goto _0;
				t14=1!=t17.get();
			}
			if (ctx->doingAbort) goto _0;
_6:
			if (!(t14.get())) goto _7;
		}
		{
			Obj t19;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t19.cv(),Kmessage.cv(),kTDuAS3gJ9s8.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t19.cv()},1,1805)) goto _0;
		}
		goto _2;
_7:
		{
			Variant t20;
			c.f.fLine=26;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t20.cv())) goto _0;
			Variant t21;
			if (g->GetMember(ctx,t20.cv(),KfontName.cv(),t21.cv())) goto _0;
			Bool t22;
			if (g->OperationOnAny(ctx,7,t21.cv(),Value_null().cv(),t22.cv())) goto _0;
			Bool t23;
			t23=t22.get();
			if (!(t22.get())) goto _8;
			{
				Variant t24;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t24.cv())) goto _0;
				Variant t25;
				if (g->GetMember(ctx,t24.cv(),KfontName.cv(),t25.cv())) goto _0;
				Long t26;
				if (g->Call(ctx,(PCV[]){t26.cv(),t25.cv()},1,1509)) goto _0;
				t23=2!=t26.get();
			}
			if (ctx->doingAbort) goto _0;
_8:
			if (!(t23.get())) goto _9;
		}
		{
			Obj t28;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t28.cv(),Kmessage.cv(),kg3ucq3_wCMA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t28.cv()},1,1805)) goto _0;
		}
		goto _2;
_9:
_2:
		{
			Variant t29;
			c.f.fLine=32;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t29.cv())) goto _0;
			Bool t30;
			if (g->OperationOnAny(ctx,6,t29.cv(),Value_null().cv(),t30.cv())) goto _0;
			if (!(t30.get())) goto _11;
		}
		if (ctx->doingAbort) goto _0;
		goto _10;
_11:
		{
			Variant t31;
			c.f.fLine=34;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t31.cv())) goto _0;
			Long t32;
			if (g->Call(ctx,(PCV[]){t32.cv(),t31.cv()},1,1509)) goto _0;
			Bool t33;
			t33=38!=t32.get();
			if (!(t33.get())) goto _12;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t34;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t34.cv(),Kmessage.cv(),kREUXtvmddvA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t34.cv()},1,1805)) goto _0;
		}
		goto _10;
_12:
		{
			Variant t35;
			c.f.fLine=36;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->GetMember(ctx,t35.cv(),KfontSize.cv(),t36.cv())) goto _0;
			Bool t37;
			if (g->OperationOnAny(ctx,7,t36.cv(),Value_null().cv(),t37.cv())) goto _0;
			Bool t38;
			t38=t37.get();
			if (!(t37.get())) goto _13;
			{
				Variant t39;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t39.cv())) goto _0;
				Variant t40;
				if (g->GetMember(ctx,t39.cv(),KfontSize.cv(),t40.cv())) goto _0;
				Long t41;
				if (g->Call(ctx,(PCV[]){t41.cv(),t40.cv()},1,1509)) goto _0;
				t38=9!=t41.get();
			}
			if (ctx->doingAbort) goto _0;
_13:
			Bool t43;
			t43=t38.get();
			if (!(t38.get())) goto _14;
			{
				Variant t44;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t44.cv())) goto _0;
				Variant t45;
				if (g->GetMember(ctx,t44.cv(),KfontSize.cv(),t45.cv())) goto _0;
				Long t46;
				if (g->Call(ctx,(PCV[]){t46.cv(),t45.cv()},1,1509)) goto _0;
				t43=1!=t46.get();
			}
			if (ctx->doingAbort) goto _0;
_14:
			if (!(t43.get())) goto _15;
		}
		{
			Obj t48;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t48.cv(),Kmessage.cv(),kTDuAS3gJ9s8.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t48.cv()},1,1805)) goto _0;
		}
		goto _10;
_15:
		{
			Variant t49;
			c.f.fLine=38;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t49.cv())) goto _0;
			Variant t50;
			if (g->GetMember(ctx,t49.cv(),KfontName.cv(),t50.cv())) goto _0;
			Bool t51;
			if (g->OperationOnAny(ctx,7,t50.cv(),Value_null().cv(),t51.cv())) goto _0;
			Bool t52;
			t52=t51.get();
			if (!(t51.get())) goto _16;
			{
				Variant t53;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t53.cv())) goto _0;
				Variant t54;
				if (g->GetMember(ctx,t53.cv(),KfontName.cv(),t54.cv())) goto _0;
				Long t55;
				if (g->Call(ctx,(PCV[]){t55.cv(),t54.cv()},1,1509)) goto _0;
				t52=2!=t55.get();
			}
			if (ctx->doingAbort) goto _0;
_16:
			if (!(t52.get())) goto _17;
		}
		{
			Obj t57;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t57.cv(),Kmessage.cv(),kg3ucq3_wCMA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t57.cv()},1,1805)) goto _0;
		}
		goto _10;
_17:
_10:
		{
			Variant t58;
			c.f.fLine=44;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t58.cv())) goto _0;
			Bool t59;
			if (g->OperationOnAny(ctx,6,t58.cv(),Value_null().cv(),t59.cv())) goto _0;
			if (!(t59.get())) goto _19;
		}
		if (ctx->doingAbort) goto _0;
		goto _18;
_19:
		{
			Variant t60;
			c.f.fLine=46;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t60.cv())) goto _0;
			Long t61;
			if (g->Call(ctx,(PCV[]){t61.cv(),t60.cv()},1,1509)) goto _0;
			Bool t62;
			t62=38!=t61.get();
			if (!(t62.get())) goto _20;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t63;
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){t63.cv(),Kmessage.cv(),kREUXtvmddvA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t63.cv()},1,1805)) goto _0;
		}
		goto _18;
_20:
		{
			Variant t64;
			c.f.fLine=48;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t64.cv())) goto _0;
			Variant t65;
			if (g->GetMember(ctx,t64.cv(),KfontSize.cv(),t65.cv())) goto _0;
			Bool t66;
			if (g->OperationOnAny(ctx,7,t65.cv(),Value_null().cv(),t66.cv())) goto _0;
			Bool t67;
			t67=t66.get();
			if (!(t66.get())) goto _21;
			{
				Variant t68;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t68.cv())) goto _0;
				Variant t69;
				if (g->GetMember(ctx,t68.cv(),KfontSize.cv(),t69.cv())) goto _0;
				Long t70;
				if (g->Call(ctx,(PCV[]){t70.cv(),t69.cv()},1,1509)) goto _0;
				t67=9!=t70.get();
			}
			if (ctx->doingAbort) goto _0;
_21:
			Bool t72;
			t72=t67.get();
			if (!(t67.get())) goto _22;
			{
				Variant t73;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t73.cv())) goto _0;
				Variant t74;
				if (g->GetMember(ctx,t73.cv(),KfontSize.cv(),t74.cv())) goto _0;
				Long t75;
				if (g->Call(ctx,(PCV[]){t75.cv(),t74.cv()},1,1509)) goto _0;
				t72=1!=t75.get();
			}
			if (ctx->doingAbort) goto _0;
_22:
			if (!(t72.get())) goto _23;
		}
		{
			Obj t77;
			c.f.fLine=49;
			if (g->Call(ctx,(PCV[]){t77.cv(),Kmessage.cv(),kTDuAS3gJ9s8.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t77.cv()},1,1805)) goto _0;
		}
		goto _18;
_23:
		{
			Variant t78;
			c.f.fLine=50;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t78.cv())) goto _0;
			Variant t79;
			if (g->GetMember(ctx,t78.cv(),KfontName.cv(),t79.cv())) goto _0;
			Bool t80;
			if (g->OperationOnAny(ctx,7,t79.cv(),Value_null().cv(),t80.cv())) goto _0;
			Bool t81;
			t81=t80.get();
			if (!(t80.get())) goto _24;
			{
				Variant t82;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t82.cv())) goto _0;
				Variant t83;
				if (g->GetMember(ctx,t82.cv(),KfontName.cv(),t83.cv())) goto _0;
				Long t84;
				if (g->Call(ctx,(PCV[]){t84.cv(),t83.cv()},1,1509)) goto _0;
				t81=2!=t84.get();
			}
			if (ctx->doingAbort) goto _0;
_24:
			if (!(t81.get())) goto _25;
		}
		{
			Obj t86;
			c.f.fLine=51;
			if (g->Call(ctx,(PCV[]){t86.cv(),Kmessage.cv(),kg3ucq3_wCMA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t86.cv()},1,1805)) goto _0;
		}
		goto _18;
_25:
_18:
		lDO__NOT__MODIFY__l=-1;
		lDO__NOT__MODIFY__t=K.get();
		{
			Variant t87;
			c.f.fLine=64;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t87.cv())) goto _0;
			Bool t88;
			if (g->OperationOnAny(ctx,7,t87.cv(),Value_null().cv(),t88.cv())) goto _0;
			if (!(t88.get())) goto _26;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t89;
			c.f.fLine=65;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t89.cv())) goto _0;
			Variant t90;
			if (g->GetMember(ctx,t89.cv(),KfontSize.cv(),t90.cv())) goto _0;
			Bool t91;
			if (g->OperationOnAny(ctx,6,t90.cv(),Value_null().cv(),t91.cv())) goto _0;
			Variant t92;
			if (!(t91.get())) goto _27;
			{
				Long t93;
				t93=lDO__NOT__MODIFY__l.get();
				if (!g->SetValue(ctx,(PCV[]){t93.cv(),t92.cv(),nullptr})) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t93.cv(),t92.cv(),nullptr})) goto _0;
				goto _28;
			}
			if (ctx->doingAbort) goto _0;
_27:
			{
				Variant t94;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t94.cv())) goto _0;
				if (g->GetMember(ctx,t94.cv(),KfontSize.cv(),t92.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_28:
			Long t96;
			if (!g->GetValue(ctx,(PCV[]){t96.cv(),t92.cv(),nullptr})) goto _0;
			ltitleFontSize__l=t96.get();
		}
		{
			Variant t97;
			c.f.fLine=66;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t97.cv())) goto _0;
			Variant t98;
			if (g->GetMember(ctx,t97.cv(),KfontName.cv(),t98.cv())) goto _0;
			Bool t99;
			if (g->OperationOnAny(ctx,6,t98.cv(),Value_null().cv(),t99.cv())) goto _0;
			Variant t100;
			if (!(t99.get())) goto _29;
			{
				Txt t101;
				t101=lDO__NOT__MODIFY__t.get();
				if (!g->SetValue(ctx,(PCV[]){t101.cv(),t100.cv(),nullptr})) goto _0;
				goto _30;
			}
			if (ctx->doingAbort) goto _0;
_29:
			{
				Variant t102;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t102.cv())) goto _0;
				if (g->GetMember(ctx,t102.cv(),KfontName.cv(),t100.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_30:
			Txt t104;
			if (!g->GetValue(ctx,(PCV[]){t104.cv(),t100.cv(),nullptr})) goto _0;
			ltitleFontName__t=t104.get();
		}
_26:
		{
			Variant t105;
			c.f.fLine=69;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t105.cv())) goto _0;
			Bool t106;
			if (g->OperationOnAny(ctx,7,t105.cv(),Value_null().cv(),t106.cv())) goto _0;
			if (!(t106.get())) goto _31;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t107;
			c.f.fLine=70;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t107.cv())) goto _0;
			Variant t108;
			if (g->GetMember(ctx,t107.cv(),KfontSize.cv(),t108.cv())) goto _0;
			Bool t109;
			if (g->OperationOnAny(ctx,6,t108.cv(),Value_null().cv(),t109.cv())) goto _0;
			Variant t110;
			if (!(t109.get())) goto _32;
			{
				Long t111;
				t111=lDO__NOT__MODIFY__l.get();
				if (!g->SetValue(ctx,(PCV[]){t111.cv(),t110.cv(),nullptr})) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t111.cv(),t110.cv(),nullptr})) goto _0;
				goto _33;
			}
			if (ctx->doingAbort) goto _0;
_32:
			{
				Variant t112;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t112.cv())) goto _0;
				if (g->GetMember(ctx,t112.cv(),KfontSize.cv(),t110.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_33:
			Long t114;
			if (!g->GetValue(ctx,(PCV[]){t114.cv(),t110.cv(),nullptr})) goto _0;
			lmessageFontSize__l=t114.get();
		}
		{
			Variant t115;
			c.f.fLine=71;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t115.cv())) goto _0;
			Variant t116;
			if (g->GetMember(ctx,t115.cv(),KfontName.cv(),t116.cv())) goto _0;
			Bool t117;
			if (g->OperationOnAny(ctx,6,t116.cv(),Value_null().cv(),t117.cv())) goto _0;
			Variant t118;
			if (!(t117.get())) goto _34;
			{
				Txt t119;
				t119=lDO__NOT__MODIFY__t.get();
				if (!g->SetValue(ctx,(PCV[]){t119.cv(),t118.cv(),nullptr})) goto _0;
				goto _35;
			}
			if (ctx->doingAbort) goto _0;
_34:
			{
				Variant t120;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t120.cv())) goto _0;
				if (g->GetMember(ctx,t120.cv(),KfontName.cv(),t118.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_35:
			Txt t122;
			if (!g->GetValue(ctx,(PCV[]){t122.cv(),t118.cv(),nullptr})) goto _0;
			lmessageFontName__t=t122.get();
		}
_31:
		{
			Variant t123;
			c.f.fLine=74;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t123.cv())) goto _0;
			Bool t124;
			if (g->OperationOnAny(ctx,7,t123.cv(),Value_null().cv(),t124.cv())) goto _0;
			if (!(t124.get())) goto _36;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t125;
			c.f.fLine=75;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t125.cv())) goto _0;
			Variant t126;
			if (g->GetMember(ctx,t125.cv(),KfontSize.cv(),t126.cv())) goto _0;
			Bool t127;
			if (g->OperationOnAny(ctx,6,t126.cv(),Value_null().cv(),t127.cv())) goto _0;
			Variant t128;
			if (!(t127.get())) goto _37;
			{
				Long t129;
				t129=lDO__NOT__MODIFY__l.get();
				if (!g->SetValue(ctx,(PCV[]){t129.cv(),t128.cv(),nullptr})) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t129.cv(),t128.cv(),nullptr})) goto _0;
				goto _38;
			}
			if (ctx->doingAbort) goto _0;
_37:
			{
				Variant t130;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t130.cv())) goto _0;
				if (g->GetMember(ctx,t130.cv(),KfontSize.cv(),t128.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_38:
			Long t132;
			if (!g->GetValue(ctx,(PCV[]){t132.cv(),t128.cv(),nullptr})) goto _0;
			lbuttonFontSize__l=t132.get();
		}
		{
			Variant t133;
			c.f.fLine=76;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t133.cv())) goto _0;
			Variant t134;
			if (g->GetMember(ctx,t133.cv(),KfontName.cv(),t134.cv())) goto _0;
			Bool t135;
			if (g->OperationOnAny(ctx,6,t134.cv(),Value_null().cv(),t135.cv())) goto _0;
			Variant t136;
			if (!(t135.get())) goto _39;
			{
				Txt t137;
				t137=lDO__NOT__MODIFY__t.get();
				if (!g->SetValue(ctx,(PCV[]){t137.cv(),t136.cv(),nullptr})) goto _0;
				goto _40;
			}
			if (ctx->doingAbort) goto _0;
_39:
			{
				Variant t138;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t138.cv())) goto _0;
				if (g->GetMember(ctx,t138.cv(),KfontName.cv(),t136.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_40:
			Txt t140;
			if (!g->GetValue(ctx,(PCV[]){t140.cv(),t136.cv(),nullptr})) goto _0;
			lbuttonFontName__t=t140.get();
		}
_36:
		{
			Long t141;
			t141=lbuttonFontSize__l.get();
			Long t142;
			t142=lmessageFontSize__l.get();
			Long t143;
			t143=ltitleFontSize__l.get();
			c.f.fLine=79;
			if (g->CallComponent(glob,ctx,4,17,3,3,(PCV[]){nullptr,t143.cv(),t142.cv(),t141.cv()})) goto _0;
		}
		{
			Txt t144;
			t144=lbuttonFontName__t.get();
			Txt t145;
			t145=lmessageFontName__t.get();
			Txt t146;
			t146=ltitleFontName__t.get();
			c.f.fLine=80;
			if (g->CallComponent(glob,ctx,4,18,3,3,(PCV[]){nullptr,t146.cv(),t145.cv(),t144.cv()})) goto _0;
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20title[];
void proc_Progress_2Eget_20title( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20title);
	if (!ctx->doingAbort) {
		Txt ltitle__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,19,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			ltitle__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=ltitle__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20title[];
void proc_Progress_2Eset_20title( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20title);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Num t15;
			t15=0;
			Bool t18;
			t18=Bool(0).get();
			Txt t16;
			Txt t19;
			c.f.fLine=8;
			t19=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t20;
			t20=lid__l.get();
			if (g->CallComponent(glob,ctx,4,7,2,5,(PCV[]){nullptr,t20.cv(),t19.cv(),t15.cv(),t16.cv(),t18.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t21;
			l__4D__auto__mutex__0=t21.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20canceled[];
void proc_Progress_2Eget_20canceled( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20canceled);
	if (!ctx->doingAbort) {
		Bool lstopped__b;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Bool();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Bool t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,20,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lstopped__b=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Bool>(outResult)=lstopped__b.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Estart[];
void proc_Progress_2Estart( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Estart);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,6,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Bool t10;
			t10=Bool(0).get();
			Long t11;
			c.f.fLine=7;
			if (g->CallComponent(glob,ctx,4,21,0,1,(PCV[]){t11.cv(),t10.cv()})) goto _0;
			lid__l=t11.get();
		}
		{
			Obj t12;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),Kprogress.cv(),t13.cv())) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			if (g->SetMember(ctx,t13.cv(),t15.cv(),lid__l.cv())) goto _0;
		}
_2:
		{
			Obj t16;
			l__4D__auto__mutex__0=t16.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern Txt kJOafNKrRew8;
extern unsigned char D_proc_Progress_3Aconstructor[];
void proc_Progress_3Aconstructor( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_3Aconstructor);
	if (!ctx->doingAbort) {
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Obj t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t1.get();
		}
		{
			Obj t2;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Obj t3;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Bool t5;
			t5=t4.truthy();
			if (t5.get()) goto _2;
			{
				Obj t6;
				if (g->Call(ctx,(PCV[]){t6.cv()},0,1526)) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t6.cv(),t4.cv(),nullptr})) goto _0;
			}
_2:
			if (g->SetMember(ctx,t2.cv(),Kprogress.cv(),t4.cv())) goto _0;
		}
		{
			Obj t7;
			l__4D__auto__mutex__0=t7.get();
		}
		{
			Obj t8;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Txt t10;
			t10=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Txt t9;
			t9=t10.get();
			Bool t11;
			t11=t9.truthy();
			if (t11.get()) goto _3;
			{
				t9=kJOafNKrRew8.get();
			}
			if (ctx->doingAbort) goto _0;
_3:
			if (g->Call(ctx,(PCV[]){nullptr,t8.cv(),Kname.cv(),t9.cv(),Long(11).cv()},4,1497)) goto _0;
			g->Check(ctx);
		}
_0:
_1:
;
	}

}
