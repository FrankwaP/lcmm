#include <R_ext/RS.h>

void F77_SUB(hetmixlin)(double * Y0,
			double * X0, 
			int * Prior0,
			int * idprob0,
			int * idea0,
			int * idg0,
			int * idcor0,
			int * ns0,
			int * ng0,
			int * nv0,
			int * nobs0,
			int * nea0,
			int * nmes0,
			int * idiag0,
			int * nwg0,
			int * ncor0,
			int * npmtot0,
			double * btot,
			double * vopt,
			double * vrais,
			int * ni,
			int * istop,
			double * gconv,
			double * ppi0,
			double * resid_m0,
			double * resid_ss0,
			double * pred_m_g0,
			double * pred_ss_g0,
			double * pred_RE,
			double * convB,
			double * convL,
			double * convG,
			int * maxiter0,
			int * fix0,
			int * pbH0);

void F77_SUB(hetmixcont)(double * Y0,
			 double * X0,
			 int * Prior0,
			 int * idprob0,
			 int * idea0,
			 int * idg0,
			 int * idcor0,
			 int * ns0,
			 int * ng0,
			 int * nv0,
			 int * nobs0,
			 int * nea0,
			 int * nmes0,
			 int * idiag0,
			 int * nwg0,
			 int * ncor0,
			 int * npmtot0,
			 double * btot,
			 double * Vopt,
			 double * vrais,
			 int * ni,
			 int * istop,
			 double * gconv,
			 double * ppi0,
			 double * resid_m,
			 double * resid_ss,
			 double * pred_m_g,
			 double * pred_ss_g,
			 double * pred_RE,
			 double * convB,
			 double * convL,
			 double * convG,
			 int * maxiter0,
			 double * epsY0,
			 int * idlink0,
			 int * nbzitr0,
			 double * zitr0,
			 double * marker,
			 double * transfY,
			 int * nsim0,
			 double * Yobs,
			 int * Ydiscret,
			 double * vraisdiscret,
			 double * UACV,
			 double * rlindiv,
			 int * pbH0,
			 int * fix0);

void F77_SUB(hetmixord)(double * Y0,
			double * X0, 
			int * Prior0, 
			int * idprob0,
			int * idea0,
			int * idg0,
			int * ns0,
			int * ng0,
			int * nv0,
			int * nobs0,
			int * nea0,
			int * nmes0,
			int * idiag0,
			int * nwg0,
			int * npmtot0,
			double * btot,
			double * Vopt,
			double * vrais,
			int * ni,
			int * istop,
			double * gconv,
			double * ppi0,
			double * resid_m,
			double * resid_ss,
			double * pred_m_g,
			double * pred_ss_g,
			double * pred_RE,
			double * convB,
			double * convL,
			double * convG,
			int * maxiter0,
			int * minY0,
			int * maxY0,
			int * ide0,
			double * marker,
			double * transfY,
			double * UACV,
			double * rlindiv,
			int * fix0);

void F77_SUB(hetmixcontmult)(double * Y0, 
			     double * X0, 
			     int * Prior0, 
			     int * idprob0,
			     int * idea0,
			     int * idg0,
			     int * idcor0,
			     int * idcontr0,
			     int * ny0,
			     int * ns0,
			     int * ng0,
			     int * nv0,
			     int * nobs0,
			     int * nea0,
			     int * nmes0,
			     int * idiag0,
			     int * nwg0,
			     int * ncor0,
			     int * nalea0,
			     int * npmtot0,
			     double * btot,
			     double * Vopt,
			     double * vrais,
			     int * ni,
			     int * istop,
			     double * gconv,
			     double * ppi0,
			     double * resid_m,
			     double * resid_ss,
			     double * pred_m_g,
			     double * pred_ss_g,
			     double * pred_RE,
			     double * pred_RE_Y,
			     double * convB,
			     double * convL,
			     double * convG,
			     int * maxiter0,
			     double * epsY0,
			     int * idlink0,
			     int * nbzitr0,
			     double * zitr0,
			     double * uniqueY0,
			     int * indiceY0,
			     int * nvalspl0,
			     double * marker,
			     double * transfY,
			     int * nsim0,
			     double * Yobs,
			     int * Ydiscret,
			     double * vraisdiscret,
			     double * UACV,
			     double * rlindiv,
			     int * pbH0,
			     int * fix0);

void F77_SUB(jointhet)(double * Y0, 
		       double * X0, 
		       int * Prior0,
		       double * Tentr0,
		       double * Tevt0,
		       int * Devt0,
		       int * ind_survint0,
		       int * idprob0,
		       int * idea0,
		       int * idg0,
		       int * idcor0,
		       int * idcom0,
		       int * idspecif0,
		       int * idtdv0,
		       int * idlink0,
		       double * epsY0,
		       int * nbzitr0,
		       double * zitr0,
		       double * uniqueY0,
		       int * nvalSPL0,
		       int * indiceY0,
		       int * typrisq0,
		       int * risqcom0,
		       int * nz0,
		       double * zi0,
		       int * ns0,
		       int * ng0,
		       int * nv0,
		       int * nobs0,
		       int * nmes0,
		       int * nbevt0,
		       int * nea0,
		       int * int6,
		       int * npmtot0,
		       double * btot,
		       double * Vopt,
		       double * vrais,
		       int * ni,
		       int * istop,
		       double * gconv,
		       double * ppi0,
		       double * ppitest0,
		       double * resid_m,
		       double * resid_ss,
		       double * pred_m_g,
		       double * pred_ss_g,
		       double * pred_RE,
		       double * convBLG,
		       double * time,
		       double * risq_est,
		       double * risqcum_est,
		       double * marker,
		       double * transfY,
		       int * nsim,
		       double * Yobs,
		       double * statglob,
		       double * statevt,
		       int * pbH0,
		       int * fix0);
		      

void F77_SUB(predictcont)(double * X0,
			   int * idprob,
			   int * idea,
			   int * idg,
			   int * idcor,
			   int * ng,
			   int * ncor,
			   int * nv,
			   int * maxmes,
			   int * idiag,
			   int * nwg,
			   int * npm,
			   double * b1,
			   double * epsY,
			   int * idlink,
			   int * nbzitr,
			   double * zitr0,
			   int * nsim,
			   int * methInteg,
			   int * Ydiscret,
			   double * Ymarg);


void F77_SUB(predictmult)(double * X0,
			  int * idprob,
			  int * idea,
			  int * idg,
			  int * idcor,
			  int * idcontr,
			  int * ng,
			  int * ncor,
			  int * nalea,
			  int * nv,
			  int * ny,
			  int * maxmes,
			  int * idiag,
			  int * nwg,
			  int * npm,
			  double * b1,
			  double * epsY,
			  int * idlink,
			  int * nbzitr,
			  double * zitr0,
			  int * modalite,
			  int * nbmod,
			  int * nsim,
			  int * methInteg,
			  double * Ymarg);

void F77_SUB(predictcondmult)(double * X0,
			      int * condRE_Y,
			      int * nalea,
			      int * ny,
			      int * nerr,
			      int * maxmes,
			      int * npm,
			      double * b1,
			      int * debut,
			      double * epsY,
			      int * idlink,
			      int * nbzitr,
			      double * zitr0,
			      int * mod,
			      int * nbmod,
			      int * nsim,
			      double * Ymarg);

void F77_SUB(cvpl)(double * Y0, 
		   double * X0, 
		   int * Prior0,
		   int * idprob0,
		   int * idea0,
		   int * idg0,
		   int * idcor0,
		   int * idcom0,
		   int * idspecif0,
		   int * idtdv0,
		   int * ns0,
		   int * ng0,
		   int * ncor0,
		   int * nv0,
		   int * nobs0,
		   int * nmes0,
		   int * idiag0,
		   int * nwg0,
		   int * npmtot0,
		   double * time0,
		   int * typrisq0,
		   int * idtrunc0,
		   int * risqcom0,
		   int * nz0,
		   double * zi0,
		   double * Tentr0,
		   double * Tevt0,
		   int * Devt0,
		   int * ind_survint0,
		   double * Vopt,
		   int * nT,
		   double * valT,
		   double * btot,
		   double * epoir,
		   double * rl_cond,
		   int * ns_vect,
		   int * nevt_vect,
		   double * contribt,
		   int * logspecif0,
		   int * fix0,
		   int * npm0);

void F77_SUB(postprob2)(double * Y0, 
			double * Xdata0, 
			int * ns0,
			int * nmes0,
			int * nobs0,
			int * ng0,
			int * nv0,
			int * idiag0,
			int * nwg0,
			int * ncor0,
			int * logspecif0,
			double * zi0,
			int * idea0,
			int * idg0,
			int * idprob0,
			int * idcor0, 
			int * idcom0,
			int * idspecif0,
			int * idtdv0,
			int * risqcom0,
			int * nvdepsurv0,
			int * typrisq0,
			int * nz0,
			int * nprisq0,
			int * nbzitr0,
			double * zitr0,
			int * idlink0,
			int * indiceY0,
			double * uniqueY0,
			int * nvalSPL0,
			double * epsY0,
			int * nbevt0,
			double * tsurv00,
			int * idtrunc0,
			double * b,
			int * npm0,
			double * timemes,
			double * landmark,
			int * nbland,
			double * ppi);

void F77_SUB(calculustransfo)(double * b,
			       int * npm,
			       int * ny,
			       int * idlink,
			       int * ntrtot,
			       int * imoins,
			       double * zitr0,
			       int * maxnbzitr,
			       double * marker,
			       int * nsim,
			       double * minY,
			       double * maxY,
			       double * epsY,
			       int * ide,
			       int * dimide,
			       double * transfY);

void F77_SUB(mpjhet)(int * K0,
		     int * ny0,
		     int * nbevt0,
		     int * ng0,
		     int * ns0,
		     double * Y0,
		     int * nobs0,
		     double * X0,
		     int * nv0,
		     double * Xns0,
		     int * nv20,
		     int * prior0,
		     double * Tentr0,
		     double * Tevt0,
		     int * Devt0,
		     int * ind_survint,
		     int * idnv0,
		     int * idnv20,
		     int * idspecif0,
		     int * idlink0,
		     double * epsY0,
		     int * nbzitr0,
		     double * zitr0,
		     double * uniqueY0,
		     int * nvalSPL0,
		     int * indiceY0,
		     int * typrisq0,
		     int * risqcom0,
		     int * nz0,
		     double * zi0,
		     int * nmes0,
		     int * nea0,
		     int * nw0,
		     int * ncor0,
		     int * nalea0,
		     int * idiag0,
		     int * int3,
		     int * npmtot0,
		     double * btot,
		     double * Vopt,
		     double * vrais,
		     int * ni,
		     int * istop,
		     double * gconv,
		     double * ppi0,
		     double * ppitest0,
		     double * resid_m,
		     double * resid_ss,
		     double * pred_m_g,
		     double * pred_ss_g,
		     double * pred_RE,
		     double * pred_RE_Y,
		     double * convBLG,
		     double * time,
		     double * risq_est,
		     double * risqcum_est,
		     double * marker,
		     double * transfY,
		     int * nsim,
		     double * Yobs,
		     double * statscoretest,
		     int * pbH0,
		     int * fix0,
		     int * contrainte);
		     


void F77_SUB(hetmixmult)(double * Y0, 
			 double * X0, 
			 int * Prior0, 
			 int * idprob0,
			 int * idea0,
			 int * idg0,
			 int * idcor0,
			 int * idcontr0,
			 int * ny0,
			 int * ns0,
			 int * ng0,
			 int * nv0,
			 int * nobs0,
			 int * nea0,
			 int * nmes0,
			 int * idiag0,
			 int * nwg0,
			 int * ncor0,
			 int * nalea0,
			 int * npmtot0,
			 double * btot,
			 double * Vopt,
			 double * vrais,
			 int * ni,
			 int * istop,
			 double * gconv,
			 double * ppi0,
			 double * resid_m,
			 double * resid_ss,
			 double * pred_m_g,
			 double * pred_ss_g,
			 double * pred_RE,
			 double * pred_RE_Y,
			 double * convB,
			 double * convL,
			 double * convG,
			 int * maxiter0,
			 double * epsY0,
			 int * idlink0,
			 int * nbzitr0,
			 double * zitr0,
			 double * uniqueY0,
			 int * indiceY0,
			 int * nvalsplord0,
			 double * marker,
			 double * transfY,
			 int * nsim0,
			 double * Yobs,
			 int * Ydiscret,
			 double * vraisdiscret,
			 double * UACV,
			 double * rlindiv,
			 int * pbH0,
			 int * fix0,
			 int * methInteg0,
			 int * nMC0,
			 int * dimMC0,
			 double * seqMC0);

void F77_SUB(iteminfo)(double * X0,
		       int * condRE_Y,
		       int * nalea,
		       int * ny,
		       int * maxmes,
		       int * npm,
		       double * b1,
		       int * debut,
                       int * nbzitr,
		       int * idlink,
		       int * mod,
		       int * nbmod,
		       int * nsim,
		       int * ninfo,
		       double * info);




void F77_SUB(loglikmultlcmm)(double * Y0, 
			     double * X0, 
			     int * Prior0, 
			     int * idprob0,
			     int * idea0,
			     int * idg0,
			     int * idcor0,
			     int * idcontr0,
			     int * ny0,
			     int * ns0,
			     int * ng0,
			     int * nv0,
			     int * nobs0,
			     int * nea0,
			     int * nmes0,
			     int * idiag0,
			     int * nwg0,
			     int * ncor0,
			     int * nalea0,
			     int * npm0,
			     double * b0,
			     double * ppi0,
			     double * resid_m,
			     double * resid_ss,
			     double * pred_m_g,
			     double * pred_ss_g,
			     double * pred_RE,
			     double * pred_RE_Y,
			     double * epsY0,
			     int * idlink0,
			     int * nbzitr0,
			     double * zitr0,
			     double * uniqueY0,
			     int * indiceY0,
			     int * nvalsplord0,
			     double * marker,
			     double * transfY,
			     int * nsim0,
			     double * Yobs,
			     int * Ydiscret,
			     double * vraisdiscret,
			     double * UACV,
			     double * rlindiv,
			     int * fix0,
			     int * nfix0,
			     double * bfix0,
			     int * methInteg0,
			     int * nMC0,
			     int * dimMC0,
			     double * seqMC0,
			     int * chol0,
			     int * estim0,
			     double * vrais);


void F77_SUB(loglikjointlcmm)(double * Y0, 
			      double * X0, 
			      int * Prior0,
			      double * Tentr0,
			      double * Tevt0,
			      int * Devt0,
			      int * ind_survint0,
			      int * idprob0,
			      int * idea0,
			      int * idg0,
			      int * idcor0,
			      int * idcom0,
			      int * idspecif0,
			      int * idtdv0,
			      int * idlink0,
			      double * epsY0,
			      int * nbzitr0,
			      double * zitr0,
			      double * uniqueY0,
			      int * nvalSPL0,
			      int * indiceY0,
			      int * typrisq0,
			      int * risqcom0,
			      int * nz0,
			      double * zi0,
			      int * ns0,
			      int * ng0,
			      int * nv0,
			      int * nobs0,
			      int * nmes0,
			      int * nbevt0,
			      int * nea0, 
			      int * nwg0,
			      int * ncor0,
			      int * idiag0,
			      int * idtrunc0,
			      int * logspecif,
			      int * npm0,
			      double * b0,
			      double * ppi0,
			      double * ppitest0,
			      double * resid_m,
			      double * resid_ss,
			      double * pred_m_g,
			      double * pred_ss_g,
			      double * pred_RE,
			      double * time,
			      double * risq_est,
			      double * risqcum_est,
			      double * marker,
			      double * transfY,
			      int * nsim,
			      double * Yobs,
			      double * statglob,
			      double * statevt,
			      int * fix0,
			      int * nfix0,
			      double * bfix0,
			      int * estim0,
			      double * loglik);
