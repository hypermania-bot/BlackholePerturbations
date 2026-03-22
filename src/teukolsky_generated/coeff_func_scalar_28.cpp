#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1400(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1400] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1400] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((75)*(expr[1]))+(((-285)*(expr[2]))+((245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1401(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1401] = ((0.0703125000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[1401] = ((0.0703125000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((153)*(expr[1]))+(((-855)*(expr[2]))+(((1463)*(expr[3]))+((-784)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1402(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1402] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((14.2222222222222222222222222222)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((36)*((a)*((M)*(r))))+(((12)*((pow(a,3))+((a)*((r)*(((-19)*(M))+(r))))))+(((-87.1111111111111111111111111111)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-2.40000000000000000000000000000)*(((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r)))))))+((4)*(((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r)))))))))))));
} else {
coeffs[1402] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-153)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((855)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-1463)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((784)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((18)*((a)*((M)*((r)*(expr[0])))))+(((18)*(((pow(a,3))+((a)*((r)*(((-19)*(M))+(r)))))*(expr[1])))+(((-6)*((((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r))))))*(expr[2])))+(((14)*((((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r))))))*(expr[3])))+((-392)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1403(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1403] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1403] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-156)*(expr[1]))+(((1050)*(expr[2]))+(((-2156)*(expr[3]))+((1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1404(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1404] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1404] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-156)*(expr[1]))+(((1050)*(expr[2]))+(((-2156)*(expr[3]))+((1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1405(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1405] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((534.545454545454545454545454545)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((8)*(((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r)))))))+(((16)*(((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r)))))))+(((-9.33333333333333333333333333333)*(((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r)))))))+((-1.60000000000000000000000000000)*(((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r)))))))))))));
} else {
coeffs[1405] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-1323)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((12)*((((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r))))))*(expr[1])))+(((-4)*((((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r))))))*(expr[2])))+(((56)*((((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r))))))*(expr[3])))+(((-42)*((((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r))))))*(expr[4])))+((2940)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1406(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1406] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1406] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-420)*(expr[1]))+(((3570)*(expr[2]))+(((-10780)*(expr[3]))+(((13095)*(expr[4]))+((-5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1407(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1407] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-60)*((a)*((M)*(r))))+(((-20)*((pow(a,3))+((a)*((r)*(((-30)*(M))+(r))))))+(((56)*(((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r)))))))+(((-84)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((60)*(((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r)))))))+((-8)*(((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r)))))))))))));
} else {
coeffs[1407] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-3570)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((10780)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-13095)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((5544)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-30)*((a)*((M)*((r)*(expr[0])))))+(((-30)*(((pow(a,3))+((a)*((r)*(((-30)*(M))+(r)))))*(expr[1])))+(((140)*((((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r))))))*(expr[2])))+(((-28)*((((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r))))))*(expr[3])))+(((270)*((((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r))))))*(expr[4])))+((-462)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1408(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1408] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1408] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1409(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1409] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1409] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1410(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1410] = ((0.281250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[1410] = ((0.281250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1411(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1411] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((7.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r)))))))+(((-8)*(((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r)))))))+((4.80000000000000000000000000000)*(((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r)))))))))))));
} else {
coeffs[1411] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*((((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r))))))*(expr[1])))+(((12)*((((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r))))))*(expr[2])))+(((-28)*((((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r))))))*(expr[3])))+((196)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1412(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1412] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1412] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1413(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1413] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1413] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1414(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1414] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((22)*(M))+(r))))))+(((-32)*(((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r)))))))+(((9.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r)))))))+((2.66666666666666666666666666667)*(((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r)))))))))))));
} else {
coeffs[1414] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((22)*(M))+(r)))))*(expr[1])))+(((24)*((((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r))))))*(expr[2])))+(((-112)*((((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r))))))*(expr[3])))+(((12)*((((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r))))))*(expr[4])))+((-210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1415(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1415] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1415] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1416(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1416] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-168)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((6)*(((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r)))))))+(((42)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((-24)*(((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r)))))))+((4)*(((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r))))))))))))));
} else {
coeffs[1416] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((9)*((((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r))))))*(expr[1])))+(((-420)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((14)*((((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r))))))*(expr[3])))+(((-108)*((((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r))))))*(expr[4])))+((231)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1417(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1417] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1417] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1418(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1418] = ((0.492187500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[1418] = ((0.492187500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+(((-15)*(expr[2]))+(((31)*(expr[3]))+((-16)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1419(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1419] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.666666666666666666666666666667)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2.69841269841269841269841269841)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-7.20000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+((1.71428571428571428571428571429)*(((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r)))))))))))));
} else {
coeffs[1419] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-31)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((16)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[1])))+(((-18)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((6)*((((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r))))))*(expr[3])))+((-24)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1420(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1420] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1420] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((150)*(expr[2]))+(((-196)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1421(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1421] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1421] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((150)*(expr[2]))+(((-196)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1422(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1422] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((10.9090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((52)*(M))+(r))))))+(((-4.80000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r)))))))+(((6.85714285714285714285714285714)*(((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r)))))))+((-0.444444444444444444444444444444)*(((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r))))))))))))));
} else {
coeffs[1422] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-150)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((52)*(M))+(r)))))*(expr[1])))+(((-12)*((((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r))))))*(expr[2])))+(((24)*((((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r))))))*(expr[3])))+(((-2)*((((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r))))))*(expr[4])))+((60)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1423(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1423] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1423] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-196)*(expr[3]))+(((225)*(expr[4]))+((-88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1424(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1424] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((-4)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((-24)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((8)*(((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r)))))))+(((-4)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+((4)*(((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r))))))))))))));
} else {
coeffs[1424] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((88)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((20)*((((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r))))))*(expr[2])))+(((-84)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[3])))+(((18)*((((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r))))))*(expr[4])))+((-22)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1425(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1425] = ((1.96875000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[1425] = ((1.96875000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+(((-2)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_1426(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1426] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.222222222222222222222222222222)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.23809523809523809523809523810)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-6)*(pow(a,3)))+((2)*((a)*((((14)*(M))+((-3)*(r)))*(r))))))+(((0.444444444444444444444444444444)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((2.40000000000000000000000000000)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))))))));
} else {
coeffs[1426] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[4])))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((((-6)*(pow(a,3)))+((2)*((a)*((((14)*(M))+((-3)*(r)))*(r)))))*(expr[3]))+((2)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1427(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1427] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1427] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1428(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1428] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1428] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1429(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1429] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((-1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((2)*((pow(a,3))+((a)*((r)*(((-34)*(M))+(r))))))+(((-0.909090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+((-0.571428571428571428571428571429)*(((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r)))))))))))));
} else {
coeffs[1429] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((30)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((3)*(((pow(a,3))+((a)*((r)*(((-34)*(M))+(r)))))*(expr[1])))+(((-4)*(((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[2])))+(((-2)*((((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r))))))*(expr[3])))+(((12)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[4])))+((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1430(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1430] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1430] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-15)*(expr[1]))+(((70)*(expr[3]))+(((-90)*(expr[4]))+((33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1431(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1431] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*(r))))+(((-40)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-40)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((10)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))+(((20)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))+((2)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))))))));
} else {
coeffs[1431] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*((r)*(expr[0])))))+(((15)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((-100)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((70)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((-180)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))+((11)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1432(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1432] = ((1.12792968750000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.886580086580086580086580086580));
} else {
coeffs[1432] = ((1.12792968750000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-2)*(expr[2]))+(((-2)*(expr[3]))+(((3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1433(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1433] = ((2.25585937500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.886580086580086580086580086580));
} else {
coeffs[1433] = ((2.25585937500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-2)*(expr[2]))+(((-2)*(expr[3]))+(((3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1434(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1434] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((0.886580086580086580086580086580)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-8)*(pow(a,3)))+((2)*((a)*((((23)*(M))+((-4)*(r)))*(r))))))+(((0.363636363636363636363636363636)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((13)*(M))+(r))))))+(((-1.60000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r)))))))+((1.14285714285714285714285714286)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))))))))));
} else {
coeffs[1434] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((13)*(M))+(r)))))*(expr[1])))+(((-4)*((((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r))))))*(expr[2])))+(((4)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((-8)*(pow(a,3)))+((2)*((a)*((((23)*(M))+((-4)*(r)))*(r)))))*(expr[4]))+((2)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1435(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1435] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1435] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1436(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1436] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1436] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1437(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1437] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-180)*((a)*((M)*(r))))+(((-4)*((pow(a,3))+((a)*((r)*(((-52)*(M))+(r))))))+(((0.923076923076923076923076923077)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((-79)*(M))+((2)*(r))))))))+(((-1.81818181818181818181818181818)*(((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r)))))))+((2.22222222222222222222222222222)*(((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r))))))))))))));
} else {
coeffs[1437] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((2)*((a)*((r)*(((-79)*(M))+((2)*(r)))))))*(expr[1]))+(((-10)*(((pow(a,3))+((a)*((r)*(((-52)*(M))+(r)))))*(expr[2])))+(((-700)*((a)*((M)*((r)*(expr[3])))))+(((10)*((((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r))))))*(expr[4])))+(((-10)*((((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r))))))*(expr[5])))+((6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1438(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1438] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1438] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1439(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1439] = ((0.902343750000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.21645021645021645021645021645));
} else {
coeffs[1439] = ((0.902343750000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((-10)*(expr[2]))+(((58)*(expr[3]))+(((-69)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1440(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1440] = ((0.902343750000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.21645021645021645021645021645));
} else {
coeffs[1440] = ((0.902343750000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((-10)*(expr[2]))+(((58)*(expr[3]))+(((-69)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1441(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1441] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.21645021645021645021645021645)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((-7.27272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+(((6.40000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-4.57142857142857142857142857143)*(((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r)))))))+((1.77777777777777777777777777778)*(((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))))))))));
} else {
coeffs[1441] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-58)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((-8)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((16)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[2])))+(((-16)*((((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r))))))*(expr[3])))+(((8)*((((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))*(expr[4])))+((-40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1442(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1442] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1442] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((90)*(expr[1]))+(((-500)*(expr[2]))+(((980)*(expr[3]))+(((-810)*(expr[4]))+((242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1443(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1443] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1443] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((90)*(expr[1]))+(((-500)*(expr[2]))+(((980)*(expr[3]))+(((-810)*(expr[4]))+((242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1444(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1444] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*(r))))+(((-25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((3.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((142)*(M))+(r))))))+(((-10)*((pow(a,3))+((a)*((r)*(((158)*(M))+(r))))))+(((20)*(((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r)))))))+(((-2.22222222222222222222222222222)*(((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r)))))))+((0.181818181818181818181818181818)*(((505)*(pow(a,3)))+((a)*((r)*(((926)*(M))+((505)*(r))))))))))))));
} else {
coeffs[1444] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((500)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-980)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((810)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-242)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*((r)*(expr[0])))))+(((5)*(((pow(a,3))+((a)*((r)*(((142)*(M))+(r)))))*(expr[1])))+(((-25)*(((pow(a,3))+((a)*((r)*(((158)*(M))+(r)))))*(expr[2])))+(((70)*((((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r))))))*(expr[3])))+(((-10)*((((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r))))))*(expr[4])))+(((((505)*(pow(a,3)))+((a)*((r)*(((926)*(M))+((505)*(r))))))*(expr[5]))+((-165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1445(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1445] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1445] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-4)*(expr[1]))+(((-10)*(expr[2]))+(((28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1446(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1446] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1446] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-150)*(expr[2]))+(((196)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1447(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1447] = ((0.225585937500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-4.43290043290043290043290043290));
} else {
coeffs[1447] = ((0.225585937500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-29)*(expr[1]))+(((190)*(expr[2]))+(((-514)*(expr[3]))+(((579)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1448(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1448] = ((0.451171875000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-4.43290043290043290043290043290));
} else {
coeffs[1448] = ((0.451171875000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-29)*(expr[1]))+(((190)*(expr[2]))+(((-514)*(expr[3]))+(((579)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1449(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1449] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((4.43290043290043290043290043290)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((596)*(pow(a,3)))+(((-4276)*((a)*((M)*(r))))+((596)*((a)*(pow(r,2)))))))+(((49.0909090909090909090909090909)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((1.33333333333333333333333333333)*(((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r)))))))+(((-1.60000000000000000000000000000)*(((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r)))))))+((-1.33333333333333333333333333333)*((a)*(((116)*(pow(a,2)))+((r)*(((-811)*(M))+((116)*(r))))))))))))));
} else {
coeffs[1449] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((29)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((514)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-579)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r))))))*(expr[1])))+(((-4)*((((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r))))))*(expr[2])))+(((((596)*(pow(a,3)))+(((-4276)*((a)*((M)*(r))))+((596)*((a)*(pow(r,2))))))*(expr[3]))+(((-6)*((a)*((((116)*(pow(a,2)))+((r)*(((-811)*(M))+((116)*(r)))))*(expr[4]))))+((270)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

}
