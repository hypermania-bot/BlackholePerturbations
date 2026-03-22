#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_900(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[900] = ((0.0507812500000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-39.3846153846153846153846153846));
} else {
coeffs[900] = ((0.0507812500000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[0]))+(((975)*(expr[1]))+(((-12550)*(expr[2]))+(((57750)*(expr[3]))+(((-118845)*(expr[4]))+(((111771)*(expr[5]))+((-39204)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_901(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[901] = ((0.0253906250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-39.3846153846153846153846153846));
} else {
coeffs[901] = ((0.0253906250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[0]))+(((975)*(expr[1]))+(((-12550)*(expr[2]))+(((57750)*(expr[3]))+(((-118845)*(expr[4]))+(((111771)*(expr[5]))+((-39204)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_902(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[902] = ((0.0507812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-39.3846153846153846153846153846)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-100)*((a)*((M)*(r))))+(((-33.3333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-41)*(M))+(r))))))+(((2010.46153846153846153846153846)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((40)*(((13)*(pow(a,3)))+((a)*((r)*(((-277)*(M))+((13)*(r)))))))+(((-17.1428571428571428571428571429)*(((153)*(pow(a,3)))+((a)*((r)*(((-2231)*(M))+((153)*(r)))))))+(((-36)*(((155)*(pow(a,3)))+((a)*((r)*(((-1439)*(M))+((155)*(r)))))))+((6.66666666666666666666666666667)*(((856)*(pow(a,3)))+((a)*((r)*(((-9635)*(M))+((856)*(r)))))))))))))));
} else {
coeffs[902] = ((0.0507812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((975)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-12550)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((57750)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-118845)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((111771)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-39204)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-50)*((a)*((M)*((r)*(expr[0])))))+(((-50)*(((pow(a,3))+((a)*((r)*(((-41)*(M))+(r)))))*(expr[1])))+(((100)*((((13)*(pow(a,3)))+((a)*((r)*(((-277)*(M))+((13)*(r))))))*(expr[2])))+(((-60)*((((153)*(pow(a,3)))+((a)*((r)*(((-2231)*(M))+((153)*(r))))))*(expr[3])))+(((30)*((((856)*(pow(a,3)))+((a)*((r)*(((-9635)*(M))+((856)*(r))))))*(expr[4])))+(((-198)*((((155)*(pow(a,3)))+((a)*((r)*(((-1439)*(M))+((155)*(r))))))*(expr[5])))+((13068)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_903(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[903] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*(((pow(a,2))+((-21)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[903] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*(((pow(a,2))+((-21)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[1]))+(((-35)*(expr[2]))+(((63)*(expr[3]))+((-33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_904(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[904] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(((pow(a,2))+((-21)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[904] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(((pow(a,2))+((-21)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[1]))+(((140)*(expr[2]))+(((-434)*(expr[3]))+(((540)*(expr[4]))+((-231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_905(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[905] = ((2.13281250000000000000000000000)*(((pow(a,2))+((-21)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.937728937728937728937728937729));
} else {
coeffs[905] = ((2.13281250000000000000000000000)*(((pow(a,2))+((-21)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((25)*(expr[1]))+(((-325)*(expr[2]))+(((1530)*(expr[3]))+(((-3210)*(expr[4]))+(((3069)*(expr[5]))+((-1089)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_906(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[906] = ((2.13281250000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.937728937728937728937728937729));
} else {
coeffs[906] = ((2.13281250000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[1]))+(((325)*(expr[2]))+(((-1530)*(expr[3]))+(((3210)*(expr[4]))+(((-3069)*(expr[5]))+((1089)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_907(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[907] = ((1.06640625000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.937728937728937728937728937729));
} else {
coeffs[907] = ((1.06640625000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[1]))+(((325)*(expr[2]))+(((-1530)*(expr[3]))+(((3210)*(expr[4]))+(((-3069)*(expr[5]))+((1089)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_908(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[908] = ((2.13281250000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((-0.937728937728937728937728937729)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[908] = ((2.13281250000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((325)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-1530)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-3069)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))));
}
}

void compute_coeffs_scalar_909(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[909] = ((0.0156250000000000000000000000000)*((6.24499799839839820584689312094)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[909] = ((0.0156250000000000000000000000000)*((6.24499799839839820584689312094)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((105)*(expr[1]))+(((-315)*(expr[2]))+((231)*(expr[3]))))));
}
}

void compute_coeffs_scalar_910(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[910] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[910] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((455)*(expr[2]))+(((-735)*(expr[3]))+((396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_911(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[911] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[911] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-180)*(expr[1]))+(((1190)*(expr[2]))+(((-2436)*(expr[3]))+((1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_912(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[912] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[912] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[0]))+(((420)*(expr[1]))+(((-3570)*(expr[2]))+(((10780)*(expr[3]))+(((-13095)*(expr[4]))+((5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_913(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[913] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[913] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((315)*(expr[1]))+(((-3290)*(expr[2]))+(((11550)*(expr[3]))+(((-16065)*(expr[4]))+((7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_914(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[914] = ((0.0253906250000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(39.3846153846153846153846153846));
} else {
coeffs[914] = ((0.0253906250000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((25)*(expr[0]))+(((-975)*(expr[1]))+(((12550)*(expr[2]))+(((-57750)*(expr[3]))+(((118845)*(expr[4]))+(((-111771)*(expr[5]))+((39204)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_915(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[915] = ((0.0507812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-39.3846153846153846153846153846)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((100)*((a)*((M)*(r))))+(((33.3333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-41)*(M))+(r))))))+(((-2010.46153846153846153846153846)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-40)*(((13)*(pow(a,3)))+((a)*((r)*(((-277)*(M))+((13)*(r)))))))+(((17.1428571428571428571428571429)*(((153)*(pow(a,3)))+((a)*((r)*(((-2231)*(M))+((153)*(r)))))))+(((36)*(((155)*(pow(a,3)))+((a)*((r)*(((-1439)*(M))+((155)*(r)))))))+((-6.66666666666666666666666666667)*(((856)*(pow(a,3)))+((a)*((r)*(((-9635)*(M))+((856)*(r)))))))))))))));
} else {
coeffs[915] = ((0.0507812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((975)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-12550)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((57750)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-118845)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((111771)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-39204)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((50)*((a)*((M)*((r)*(expr[0])))))+(((50)*(((pow(a,3))+((a)*((r)*(((-41)*(M))+(r)))))*(expr[1])))+(((-100)*((((13)*(pow(a,3)))+((a)*((r)*(((-277)*(M))+((13)*(r))))))*(expr[2])))+(((60)*((((153)*(pow(a,3)))+((a)*((r)*(((-2231)*(M))+((153)*(r))))))*(expr[3])))+(((-30)*((((856)*(pow(a,3)))+((a)*((r)*(((-9635)*(M))+((856)*(r))))))*(expr[4])))+(((198)*((((155)*(pow(a,3)))+((a)*((r)*(((-1439)*(M))+((155)*(r))))))*(expr[5])))+((-13068)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_916(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[916] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[916] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-70)*(expr[2]))+(((168)*(expr[3]))+((-99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_917(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[917] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[917] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_918(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[918] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[918] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_919(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[919] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[919] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_920(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[920] = ((0.126953125000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(15.7538461538461538461538461538));
} else {
coeffs[920] = ((0.126953125000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((324)*(expr[1]))+(((-3811)*(expr[2]))+(((16464)*(expr[3]))+(((-32085)*(expr[4]))+(((28908)*(expr[5]))+((-9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_921(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[921] = ((0.126953125000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-13.7538461538461538461538461538)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((1005.23076923076923076923076923)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((a)*(((19)*(pow(a,2)))+((r)*(((-686)*(M))+((19)*(r)))))))+(((-36)*(((85)*(pow(a,3)))+((a)*((r)*(((-754)*(M))+((85)*(r)))))))+(((13.3333333333333333333333333333)*(((257)*(pow(a,3)))+((a)*((r)*(((-2653)*(M))+((257)*(r)))))))+(((0.400000000000000000000000000000)*(((926)*(pow(a,3)))+((2)*((a)*((r)*(((-8548)*(M))+((463)*(r))))))))+((-3.42857142857142857142857142857)*(((501)*(pow(a,3)))+((a)*((r)*(((-6490)*(M))+((501)*(r)))))))))))))));
} else {
coeffs[921] = ((0.126953125000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-324)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3811)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-16464)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((32085)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-28908)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((9801)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((a)*((((19)*(pow(a,2)))+((r)*(((-686)*(M))+((19)*(r)))))*(expr[1]))))+(((((926)*(pow(a,3)))+((2)*((a)*((r)*(((-8548)*(M))+((463)*(r)))))))*(expr[2]))+(((-12)*((((501)*(pow(a,3)))+((a)*((r)*(((-6490)*(M))+((501)*(r))))))*(expr[3])))+(((60)*((((257)*(pow(a,3)))+((a)*((r)*(((-2653)*(M))+((257)*(r))))))*(expr[4])))+(((-198)*((((85)*(pow(a,3)))+((a)*((r)*(((-754)*(M))+((85)*(r))))))*(expr[5])))+((6534)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_922(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[922] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[922] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((70)*(expr[2]))+(((-84)*(expr[3]))+((33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_923(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[923] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[923] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((196)*(expr[3]))+(((-225)*(expr[4]))+((88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_924(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[924] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[924] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((47)*(expr[1]))+(((-370)*(expr[2]))+(((966)*(expr[3]))+(((-1005)*(expr[4]))+((363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_925(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[925] = ((0.571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.75042735042735042735042735043));
} else {
coeffs[925] = ((0.571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-23)*(expr[1]))+(((246)*(expr[2]))+(((-966)*(expr[3]))+(((1765)*(expr[4]))+(((-1507)*(expr[5]))+((484)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_926(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[926] = ((1.14257812500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.249572649572649572649572649573)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((692)*(pow(a,3)))+(((-7180)*((a)*((M)*(r))))+((692)*((a)*(pow(r,2)))))))+(((4)*((pow(a,3))+((a)*((r)*(((-25)*(M))+(r))))))+(((-74.4615384615384615384615384615)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-1.60000000000000000000000000000)*(((31)*(pow(a,3)))+((a)*((r)*(((-431)*(M))+((31)*(r)))))))+(((4)*(((65)*(pow(a,3)))+((a)*((r)*(((-541)*(M))+((65)*(r)))))))+((-2.22222222222222222222222222222)*(((152)*(pow(a,3)))+((a)*((r)*(((-1363)*(M))+((152)*(r)))))))))))))));
} else {
coeffs[926] = ((1.14257812500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((23)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-246)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((966)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1765)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((1507)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-484)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((-25)*(M))+(r)))))*(expr[1])))+(((-4)*((((31)*(pow(a,3)))+((a)*((r)*(((-431)*(M))+((31)*(r))))))*(expr[2])))+(((((692)*(pow(a,3)))+(((-7180)*((a)*((M)*(r))))+((692)*((a)*(pow(r,2))))))*(expr[3]))+(((-10)*((((152)*(pow(a,3)))+((a)*((r)*(((-1363)*(M))+((152)*(r))))))*(expr[4])))+(((22)*((((65)*(pow(a,3)))+((a)*((r)*(((-541)*(M))+((65)*(r))))))*(expr[5])))+((-484)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_927(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[927] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[927] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((15)*(expr[1]))+(((-70)*(expr[3]))+(((90)*(expr[4]))+((-33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_928(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[928] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[928] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-90)*(expr[1]))+(((500)*(expr[2]))+(((-980)*(expr[3]))+(((810)*(expr[4]))+((-242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_929(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[929] = ((0.152343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(13.1282051282051282051282051282));
} else {
coeffs[929] = ((0.152343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((4)*(expr[0]))+(((69)*(expr[1]))+(((-605)*(expr[2]))+(((2450)*(expr[3]))+(((-4470)*(expr[4]))+(((3641)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_930(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[930] = ((0.152343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-13.1282051282051282051282051282)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((64)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-52)*(pow(a,3)))+((4)*((a)*((((164)*(M))+((-13)*(r)))*(r))))))+(((223.384615384615384615384615385)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((8)*(((43)*(pow(a,3)))+((a)*((r)*(((-328)*(M))+((43)*(r)))))))+(((-11.4285714285714285714285714286)*(((93)*(pow(a,3)))+((a)*((r)*(((-676)*(M))+((93)*(r)))))))+(((-8)*(((115)*(pow(a,3)))+((a)*((r)*(((-892)*(M))+((115)*(r)))))))+((8.88888888888888888888888888889)*(((163)*(pow(a,3)))+((a)*((r)*(((-1220)*(M))+((163)*(r)))))))))))))));
} else {
coeffs[930] = ((0.152343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((605)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2450)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((4470)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-3641)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((32)*((a)*((M)*((r)*(expr[0])))))+(((((-52)*(pow(a,3)))+((4)*((a)*((((164)*(M))+((-13)*(r)))*(r)))))*(expr[1]))+(((20)*((((43)*(pow(a,3)))+((a)*((r)*(((-328)*(M))+((43)*(r))))))*(expr[2])))+(((-40)*((((93)*(pow(a,3)))+((a)*((r)*(((-676)*(M))+((93)*(r))))))*(expr[3])))+(((40)*((((163)*(pow(a,3)))+((a)*((r)*(((-1220)*(M))+((163)*(r))))))*(expr[4])))+(((-44)*((((115)*(pow(a,3)))+((a)*((r)*(((-892)*(M))+((115)*(r))))))*(expr[5])))+((1452)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_931(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[931] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[931] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-50)*(expr[2]))+(((70)*(expr[3]))+(((-45)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_932(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[932] = ((0.418945312500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.38694638694638694638694638695));
} else {
coeffs[932] = ((0.418945312500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-70)*(expr[3]))+(((165)*(expr[4]))+(((-131)*(expr[5]))+((36)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_933(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[933] = ((0.837890625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.386946386946386946386946386946)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((-9.23076923076923076923076923077)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-40)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((6.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((7)*(M))+(r))))))+(((28.5714285714285714285714285714)*(((3)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((3)*(r)))))))+(((-11.1111111111111111111111111111)*(((8)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((8)*(r)))))))+((1.81818181818181818181818181818)*(((25)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((25)*(r)))))))))))))));
} else {
coeffs[933] = ((0.837890625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-165)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((131)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((10)*(((pow(a,3))+((a)*((r)*(((7)*(M))+(r)))))*(expr[1])))+(((-100)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+(((100)*((((3)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((3)*(r))))))*(expr[3])))+(((-50)*((((8)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((8)*(r))))))*(expr[4])))+(((10)*((((25)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((25)*(r))))))*(expr[5])))+((-60)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_934(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[934] = ((2.51367187500000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.795648795648795648795648795649));
} else {
coeffs[934] = ((2.51367187500000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-4)*(expr[1]))+(((5)*(expr[2]))+(((-5)*(expr[4]))+(((4)*(expr[5]))+((-1)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_935(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[935] = ((2.51367187500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.20435120435120435120435120435)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((24)*((a)*((M)*(r))))+(((0.307692307692307692307692307692)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((4.44444444444444444444444444444)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-5.71428571428571428571428571429)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((22)*(M))+(r))))))+((-0.363636363636363636363636363636)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))))))))));
} else {
coeffs[935] = ((2.51367187500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((22)*(M))+(r)))))*(expr[1])))+(((10)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[2])))+(((-20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((20)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5])))+((2)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_936(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[936] = ((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3)))))))) / (denom_constant) * (std::complex<double>(static_cast<double>(-2),0.0));
} else {
coeffs[936] = ((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((-1)*(expr[0])));
}
}

void compute_coeffs_scalar_937(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[937] = ((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(static_cast<double>(-2),0.0));
} else {
coeffs[937] = ((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((-1)*(expr[0])));
}
}

void compute_coeffs_scalar_938(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[938] = ((0.500000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(static_cast<double>(-2),0.0));
} else {
coeffs[938] = ((0.500000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((-1)*(expr[0])));
}
}

void compute_coeffs_scalar_939(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[939] = ((0.500000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[939] = ((0.500000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-3)*(expr[1]))));
}
}

void compute_coeffs_scalar_940(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[940] = ((0.500000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[940] = ((0.500000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-3)*(expr[1]))));
}
}

void compute_coeffs_scalar_941(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[941] = ((0.250000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[941] = ((0.250000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-3)*(expr[1]))));
}
}

void compute_coeffs_scalar_942(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[942] = ((0.375000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[942] = ((0.375000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+((-35)*(expr[2])))));
}
}

void compute_coeffs_scalar_943(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[943] = ((0.375000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[943] = ((0.375000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+((-35)*(expr[2])))));
}
}

void compute_coeffs_scalar_944(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[944] = ((0.187500000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[944] = ((0.187500000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+((-35)*(expr[2])))));
}
}

void compute_coeffs_scalar_945(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[945] = ((0.0625000000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[945] = ((0.0625000000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((2)*((pow(M,2))*(pow(r,2))))+((-1)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((315)*(expr[2]))+((-231)*(expr[3]))))));
}
}

void compute_coeffs_scalar_946(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[946] = ((0.0625000000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[946] = ((0.0625000000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((315)*(expr[2]))+((-231)*(expr[3]))))));
}
}

void compute_coeffs_scalar_947(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[947] = ((0.0312500000000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[947] = ((0.0312500000000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((315)*(expr[2]))+((-231)*(expr[3]))))));
}
}

void compute_coeffs_scalar_948(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[948] = ((0.750000000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.33333333333333333333333333333));
} else {
coeffs[948] = ((0.750000000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[1])));
}
}

void compute_coeffs_scalar_949(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[949] = ((1.50000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.33333333333333333333333333333));
} else {
coeffs[949] = ((1.50000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[1])));
}
}

}
