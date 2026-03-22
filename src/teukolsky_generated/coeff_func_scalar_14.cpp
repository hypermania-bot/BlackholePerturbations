#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_700(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[700] = ((0.281250000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.11111111111111111111111111111));
} else {
coeffs[700] = ((0.281250000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((49)*(expr[1]))+(((-225)*(expr[2]))+(((371)*(expr[3]))+((-196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_701(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[701] = ((0.281250000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[701] = ((0.281250000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_702(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[702] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-5.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r)))))))+(((8)*(((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r)))))))+((-4.80000000000000000000000000000)*(((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r)))))))))))));
} else {
coeffs[702] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((4)*((((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r))))))*(expr[1])))+(((-12)*((((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r))))))*(expr[2])))+(((28)*((((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r))))))*(expr[3])))+((-196)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_703(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[703] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[703] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_704(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[704] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[704] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_705(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[705] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((22)*(M))+(r))))))+(((32)*(((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r)))))))+(((-9.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r)))))))+((-2.66666666666666666666666666667)*(((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r))))))))))))));
} else {
coeffs[705] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((22)*(M))+(r)))))*(expr[1])))+(((-24)*((((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r))))))*(expr[2])))+(((112)*((((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r))))))*(expr[3])))+(((-12)*((((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r))))))*(expr[4])))+((210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_706(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[706] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[706] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_707(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[707] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[707] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_708(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[708] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((168)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((-6)*(((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r)))))))+(((-42)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((24)*(((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r)))))))+((-4)*(((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r)))))))))))));
} else {
coeffs[708] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-9)*((((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r))))))*(expr[1])))+(((420)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((-14)*((((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r))))))*(expr[3])))+(((108)*((((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r))))))*(expr[4])))+((-231)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_709(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[709] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[709] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+((-35)*(expr[2])))));
}
}

void compute_coeffs_scalar_710(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[710] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[710] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+(((-75)*(expr[2]))+((56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_711(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[711] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[711] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-75)*(expr[1]))+(((285)*(expr[2]))+((-245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_712(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[712] = ((0.0703125000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(14.2222222222222222222222222222));
} else {
coeffs[712] = ((0.0703125000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((9)*(expr[0]))+(((-153)*(expr[1]))+(((855)*(expr[2]))+(((-1463)*(expr[3]))+((784)*(expr[4])))))));
}
}

void compute_coeffs_scalar_713(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[713] = ((0.140625000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[713] = ((0.140625000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((153)*(expr[1]))+(((-855)*(expr[2]))+(((1463)*(expr[3]))+((-784)*(expr[4])))))));
}
}

void compute_coeffs_scalar_714(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[714] = ((0.0703125000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[714] = ((0.0703125000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((153)*(expr[1]))+(((-855)*(expr[2]))+(((1463)*(expr[3]))+((-784)*(expr[4])))))));
}
}

void compute_coeffs_scalar_715(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[715] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-14.2222222222222222222222222222)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-36)*((a)*((M)*(r))))+(((-12)*((pow(a,3))+((a)*((r)*(((-19)*(M))+(r))))))+(((87.1111111111111111111111111111)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((2.40000000000000000000000000000)*(((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r)))))))+((-4)*(((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r)))))))))))));
} else {
coeffs[715] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((153)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-855)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((1463)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-784)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-18)*((a)*((M)*((r)*(expr[0])))))+(((-18)*(((pow(a,3))+((a)*((r)*(((-19)*(M))+(r)))))*(expr[1])))+(((6)*((((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r))))))*(expr[2])))+(((-14)*((((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r))))))*(expr[3])))+((392)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_716(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[716] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[716] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((156)*(expr[1]))+(((-1050)*(expr[2]))+(((2156)*(expr[3]))+((-1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_717(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[717] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[717] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-156)*(expr[1]))+(((1050)*(expr[2]))+(((-2156)*(expr[3]))+((1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_718(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[718] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[718] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-156)*(expr[1]))+(((1050)*(expr[2]))+(((-2156)*(expr[3]))+((1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_719(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[719] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-534.545454545454545454545454545)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-8)*(((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r)))))))+(((-16)*(((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r)))))))+(((9.33333333333333333333333333333)*(((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r)))))))+((1.60000000000000000000000000000)*(((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r)))))))))))));
} else {
coeffs[719] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((1323)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-12)*((((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r))))))*(expr[1])))+(((4)*((((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r))))))*(expr[2])))+(((-56)*((((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r))))))*(expr[3])))+(((42)*((((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r))))))*(expr[4])))+((-2940)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_720(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[720] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[720] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[0]))+(((420)*(expr[1]))+(((-3570)*(expr[2]))+(((10780)*(expr[3]))+(((-13095)*(expr[4]))+((5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_721(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[721] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[721] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-420)*(expr[1]))+(((3570)*(expr[2]))+(((-10780)*(expr[3]))+(((13095)*(expr[4]))+((-5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_722(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[722] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[722] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-420)*(expr[1]))+(((3570)*(expr[2]))+(((-10780)*(expr[3]))+(((13095)*(expr[4]))+((-5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_723(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[723] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((60)*((a)*((M)*(r))))+(((20)*((pow(a,3))+((a)*((r)*(((-30)*(M))+(r))))))+(((-56)*(((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r)))))))+(((84)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((-60)*(((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r)))))))+((8)*(((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r)))))))))))));
} else {
coeffs[723] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3570)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-10780)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((13095)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-5544)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((30)*((a)*((M)*((r)*(expr[0])))))+(((30)*(((pow(a,3))+((a)*((r)*(((-30)*(M))+(r)))))*(expr[1])))+(((-140)*((((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r))))))*(expr[2])))+(((28)*((((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r))))))*(expr[3])))+(((-270)*((((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r))))))*(expr[4])))+((462)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_724(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[724] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(((pow(a,2))+((-10)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[724] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(((pow(a,2))+((-10)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[1]))+(((10)*(expr[2]))+((-7)*(expr[3])))));
}
}

void compute_coeffs_scalar_725(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[725] = ((2.81250000000000000000000000000)*(((pow(a,2))+((-10)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.711111111111111111111111111111));
} else {
coeffs[725] = ((2.81250000000000000000000000000)*(((pow(a,2))+((-10)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((9)*(expr[1]))+(((-51)*(expr[2]))+(((91)*(expr[3]))+((-49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_726(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[726] = ((2.81250000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.711111111111111111111111111111));
} else {
coeffs[726] = ((2.81250000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((51)*(expr[2]))+(((-91)*(expr[3]))+((49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_727(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[727] = ((1.40625000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.711111111111111111111111111111));
} else {
coeffs[727] = ((1.40625000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((51)*(expr[2]))+(((-91)*(expr[3]))+((49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_728(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[728] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((-0.711111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[728] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((51)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-91)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))));
}
}

void compute_coeffs_scalar_729(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[729] = ((0.468750000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((-0.517171717171717171717171717172)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[729] = ((0.468750000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-52)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((-308)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+((147)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_730(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[730] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(((pow(a,2))+((-10)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[730] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(((pow(a,2))+((-10)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[1]))+(((140)*(expr[2]))+(((-434)*(expr[3]))+(((540)*(expr[4]))+((-231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_731(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[731] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[731] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_732(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[732] = ((0.0468750000000000000000000000000)*((26.1247009552262626468971346971)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[732] = ((0.0468750000000000000000000000000)*((26.1247009552262626468971346971)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_733(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[733] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[733] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((434)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-540)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((231)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))));
}
}

void compute_coeffs_scalar_734(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[734] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[734] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+((35)*(expr[2])))));
}
}

void compute_coeffs_scalar_735(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[735] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[735] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+(((-75)*(expr[2]))+((56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_736(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[736] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[736] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((75)*(expr[1]))+(((-285)*(expr[2]))+((245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_737(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[737] = ((0.0703125000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(14.2222222222222222222222222222));
} else {
coeffs[737] = ((0.0703125000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((9)*(expr[0]))+(((-153)*(expr[1]))+(((855)*(expr[2]))+(((-1463)*(expr[3]))+((784)*(expr[4])))))));
}
}

void compute_coeffs_scalar_738(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[738] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-14.2222222222222222222222222222)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((36)*((a)*((M)*(r))))+(((12)*((pow(a,3))+((a)*((r)*(((-19)*(M))+(r))))))+(((-87.1111111111111111111111111111)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-2.40000000000000000000000000000)*(((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r)))))))+((4)*(((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r)))))))))))));
} else {
coeffs[738] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((153)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-855)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((1463)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-784)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((18)*((a)*((M)*((r)*(expr[0])))))+(((18)*(((pow(a,3))+((a)*((r)*(((-19)*(M))+(r)))))*(expr[1])))+(((-6)*((((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r))))))*(expr[2])))+(((14)*((((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r))))))*(expr[3])))+((-392)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_739(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[739] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[739] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-156)*(expr[1]))+(((1050)*(expr[2]))+(((-2156)*(expr[3]))+((1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_740(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[740] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[740] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((156)*(expr[1]))+(((-1050)*(expr[2]))+(((2156)*(expr[3]))+((-1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_741(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[741] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[741] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((156)*(expr[1]))+(((-1050)*(expr[2]))+(((2156)*(expr[3]))+((-1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_742(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[742] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-534.545454545454545454545454545)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-8)*(((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r)))))))+(((-16)*(((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r)))))))+(((9.33333333333333333333333333333)*(((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r)))))))+((1.60000000000000000000000000000)*(((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r)))))))))))));
} else {
coeffs[742] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-1323)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-12)*((((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r))))))*(expr[1])))+(((4)*((((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r))))))*(expr[2])))+(((-56)*((((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r))))))*(expr[3])))+(((42)*((((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r))))))*(expr[4])))+((-2940)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_743(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[743] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[743] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[0]))+(((420)*(expr[1]))+(((-3570)*(expr[2]))+(((10780)*(expr[3]))+(((-13095)*(expr[4]))+((5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_744(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[744] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-60)*((a)*((M)*(r))))+(((-20)*((pow(a,3))+((a)*((r)*(((-30)*(M))+(r))))))+(((56)*(((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r)))))))+(((-84)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((60)*(((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r)))))))+((-8)*(((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r)))))))))))));
} else {
coeffs[744] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3570)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-10780)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((13095)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-5544)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-30)*((a)*((M)*((r)*(expr[0])))))+(((-30)*(((pow(a,3))+((a)*((r)*(((-30)*(M))+(r)))))*(expr[1])))+(((140)*((((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r))))))*(expr[2])))+(((-28)*((((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r))))))*(expr[3])))+(((270)*((((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r))))))*(expr[4])))+((-462)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_745(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[745] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[745] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[2]))+((-14)*(expr[3])))));
}
}

void compute_coeffs_scalar_746(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[746] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[746] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_747(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[747] = ((0.281250000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.11111111111111111111111111111));
} else {
coeffs[747] = ((0.281250000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((49)*(expr[1]))+(((-225)*(expr[2]))+(((371)*(expr[3]))+((-196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_748(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[748] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-5.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r)))))))+(((-8)*(((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r)))))))+((4.80000000000000000000000000000)*(((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r)))))))))))));
} else {
coeffs[748] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*((((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r))))))*(expr[1])))+(((12)*((((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r))))))*(expr[2])))+(((-28)*((((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r))))))*(expr[3])))+((196)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_749(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[749] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[749] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

}
