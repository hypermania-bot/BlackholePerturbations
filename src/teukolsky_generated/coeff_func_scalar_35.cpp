#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1750(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1750] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((68)*((a)*((M)*(r))))+(((210)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((-56)*(((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r)))))))+(((2)*(((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r)))))))+(((-12)*(((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r)))))))+((4)*(((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r)))))))))))));
} else {
coeffs[1750] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2674)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-5805)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((3465)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((34)*((a)*((M)*((r)*(expr[0])))))+(((3)*((((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r))))))*(expr[1])))+(((-140)*((((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r))))))*(expr[2])))+(((14)*((((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r))))))*(expr[3])))+(((-54)*((((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r))))))*(expr[4])))+((1155)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1751(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1751] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1751] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1752(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1752] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1752] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1753(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1753] = ((0.140625000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[1753] = ((0.140625000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1754(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1754] = ((0.281250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[1754] = ((0.281250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1755(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1755] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((7.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((16)*(pow(a,3)))+((a)*((r)*(((-81)*(M))+((16)*(r)))))))+(((2)*(((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r)))))))+((-1.20000000000000000000000000000)*(((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r)))))))))))));
} else {
coeffs[1755] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((16)*(pow(a,3)))+((a)*((r)*(((-81)*(M))+((16)*(r))))))*(expr[1]))+(((-3)*((((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r))))))*(expr[2])))+(((7)*((((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r))))))*(expr[3])))+((-196)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1756(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1756] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1756] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1757(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1757] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1757] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1758(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1758] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((456)*(pow(a,3)))+(((-723)*((a)*((M)*(r))))+((456)*((a)*(pow(r,2)))))))+(((-38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+(((-8)*(((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r)))))))+((0.400000000000000000000000000000)*(((96)*(pow(a,3)))+((6)*((a)*((r)*(((3)*(M))+((16)*(r)))))))))))))));
} else {
coeffs[1758] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-6)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[1])))+(((((96)*(pow(a,3)))+((6)*((a)*((r)*(((3)*(M))+((16)*(r)))))))*(expr[2]))+(((-28)*((((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r))))))*(expr[3])))+(((((456)*(pow(a,3)))+(((-723)*((a)*((M)*(r))))+((456)*((a)*(pow(r,2))))))*(expr[4]))+((-210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1759(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1759] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1759] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1760(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1760] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1760] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1761(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1761] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((84)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+(((-6)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((-42)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((6)*(((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r)))))))+((-4)*(((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r))))))))))))));
} else {
coeffs[1761] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-9)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[1])))+(((210)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((-14)*((((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r))))))*(expr[3])))+(((27)*((((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r))))))*(expr[4])))+((-231)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1762(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1762] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1762] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1763(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1763] = ((1.40625000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.42222222222222222222222222222));
} else {
coeffs[1763] = ((1.40625000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((16)*(expr[1]))+(((-78)*(expr[2]))+(((112)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1764(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1764] = ((1.40625000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.42222222222222222222222222222));
} else {
coeffs[1764] = ((1.40625000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((16)*(expr[1]))+(((-78)*(expr[2]))+(((112)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1765(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1765] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((1.42222222222222222222222222222)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[1765] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-16)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((78)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-112)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_1766(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1766] = ((0.937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-0.537373737373737373737373737374)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-2)*(M))+(r))))))));
} else {
coeffs[1766] = ((0.937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[1]))+(((-12)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((-52)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+((21)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_1767(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1767] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1767] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1768(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1768] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1768] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1769(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1769] = ((0.234375000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[1769] = ((0.234375000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((574)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-621)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((231)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_1770(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1770] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1770] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1771(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1771] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1771] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1772(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1772] = ((0.140625000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[1772] = ((0.140625000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1773(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1773] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((7.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-16)*(pow(a,3)))+((a)*((((81)*(M))+((-16)*(r)))*(r)))))+(((43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-2)*(((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r)))))))+((1.20000000000000000000000000000)*(((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r)))))))))))));
} else {
coeffs[1773] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((((-16)*(pow(a,3)))+((a)*((((81)*(M))+((-16)*(r)))*(r))))*(expr[1]))+(((3)*((((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r))))))*(expr[2])))+(((-7)*((((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r))))))*(expr[3])))+((196)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1774(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1774] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1774] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1775(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1775] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1775] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1776(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1776] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((456)*(pow(a,3)))+(((-723)*((a)*((M)*(r))))+((456)*((a)*(pow(r,2)))))))+(((-38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+(((-8)*(((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r)))))))+((0.400000000000000000000000000000)*(((96)*(pow(a,3)))+((6)*((a)*((r)*(((3)*(M))+((16)*(r))))))))))))));
} else {
coeffs[1776] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-6)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[1])))+(((((96)*(pow(a,3)))+((6)*((a)*((r)*(((3)*(M))+((16)*(r)))))))*(expr[2]))+(((-28)*((((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r))))))*(expr[3])))+(((((456)*(pow(a,3)))+(((-723)*((a)*((M)*(r))))+((456)*((a)*(pow(r,2))))))*(expr[4]))+((-210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1777(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1777] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1777] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1778(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1778] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-84)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+(((6)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((42)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((-6)*(((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r)))))))+((4)*(((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r))))))))))))));
} else {
coeffs[1778] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((9)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[1])))+(((-210)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((14)*((((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r))))))*(expr[3])))+(((-27)*((((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r))))))*(expr[4])))+((231)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1779(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1779] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1779] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1780(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1780] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1780] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-60)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1781(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1781] = ((0.562500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.55555555555555555555555555556));
} else {
coeffs[1781] = ((0.562500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-13)*(expr[1]))+(((20)*(expr[2]))+(((35)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1782(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1782] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((3.55555555555555555555555555556)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-21.7777777777777777777777777778)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r)))))))+(((4)*(((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r)))))))+((-0.800000000000000000000000000000)*((a)*(((37)*(pow(a,2)))+((r)*(((-54)*(M))+((37)*(r)))))))))))));
} else {
coeffs[1782] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((13)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r))))))*(expr[1])))+(((-2)*((a)*((((37)*(pow(a,2)))+((r)*(((-54)*(M))+((37)*(r)))))*(expr[2]))))+(((14)*((((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r))))))*(expr[3])))+((-98)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1783(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1783] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1783] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-42)*(expr[1]))+(((210)*(expr[2]))+(((-350)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1784(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1784] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1784] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-42)*(expr[1]))+(((210)*(expr[2]))+(((-350)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1785(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1785] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((52)*((a)*((M)*(r))))+(((5.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-32)*(M))+(r))))))+(((19.0909090909090909090909090909)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*(((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r)))))))+((-1.33333333333333333333333333333)*(((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r)))))))))))));
} else {
coeffs[1785] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((42)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((84)*((a)*((M)*((r)*(expr[1])))))+(((14)*(((pow(a,3))+((a)*((r)*(((-32)*(M))+(r)))))*(expr[2])))+(((7)*((((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r))))))*(expr[3])))+(((-6)*((((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r))))))*(expr[4])))+((105)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1786(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1786] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1786] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-21)*(expr[1]))+(((210)*(expr[2]))+(((-2674)*(expr[3]))+(((5805)*(expr[4]))+((-3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1787(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1787] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-68)*((a)*((M)*(r))))+(((-210)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((56)*(((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r)))))))+(((-2)*(((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r)))))))+(((12)*(((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r)))))))+((-4)*(((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r)))))))))))));
} else {
coeffs[1787] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2674)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-5805)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((3465)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-34)*((a)*((M)*((r)*(expr[0])))))+(((-3)*((((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r))))))*(expr[1])))+(((140)*((((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r))))))*(expr[2])))+(((-14)*((((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r))))))*(expr[3])))+(((54)*((((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r))))))*(expr[4])))+((-1155)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1788(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1788] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1788] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((5)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1789(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1789] = ((0.984375000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[1789] = ((0.984375000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((7)*(expr[1]))+(((-15)*(expr[2]))+(((5)*(expr[3]))+((4)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1790(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1790] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.01587301587301587301587301587)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-16)*(pow(a,3)))+((a)*((((17)*(M))+((-16)*(r)))*(r)))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+((0.400000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((37)*(M))+((4)*(r))))))))))));
} else {
coeffs[1790] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((-21)*((a)*((M)*((r)*(expr[1])))))+(((((4)*(pow(a,3)))+((a)*((r)*(((37)*(M))+((4)*(r))))))*(expr[2]))+(((((-16)*(pow(a,3)))+((a)*((((17)*(M))+((-16)*(r)))*(r))))*(expr[3]))+((12)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1791(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1791] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1791] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((140)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1792(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1792] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1792] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((140)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1793(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1793] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-8)*(pow(a,3)))+((a)*((((259)*(M))+((-8)*(r)))*(r)))))+(((24)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-5.45454545454545454545454545455)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-5.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r)))))))))))));
} else {
coeffs[1793] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r))))))*(expr[1])))+(((-14)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[2])))+(((84)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+(((((-8)*(pow(a,3)))+((a)*((((259)*(M))+((-8)*(r)))*(r))))*(expr[4]))+((-30)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1794(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1794] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1794] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((22)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-54)*(expr[1]))+(((210)*(expr[2]))+(((-224)*(expr[3]))+(((-45)*(expr[4]))+((110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1795(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1795] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-18)*((a)*((M)*(r))))+(((10)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((12)*(((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r)))))))+(((-4)*(((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r)))))))+(((0.666666666666666666666666666667)*(((11)*(pow(a,3)))+((a)*((r)*(((140)*(M))+((11)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((188)*(pow(a,2)))+((r)*(((-421)*(M))+((188)*(r)))))))))))));
} else {
coeffs[1795] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((54)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((224)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-110)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-9)*((a)*((M)*((r)*(expr[0])))))+(((((11)*(pow(a,3)))+((a)*((r)*(((140)*(M))+((11)*(r))))))*(expr[1]))+(((-10)*((((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r))))))*(expr[2])))+(((42)*((((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r))))))*(expr[3])))+(((-3)*((a)*((((188)*(pow(a,2)))+((r)*(((-421)*(M))+((188)*(r)))))*(expr[4]))))+((55)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1796(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1796] = ((0.984375000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[1796] = ((0.984375000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-4)*(expr[1]))+(((10)*(expr[2]))+(((-4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1797(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1797] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.03174603174603174603174603175)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-0.888888888888888888888888888889)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+((1.14285714285714285714285714286)*((pow(a,3))+((a)*((r)*(((2)*(M))+(r))))))))))));
} else {
coeffs[1797] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[1])))+(((4)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((4)*(((pow(a,3))+((a)*((r)*(((2)*(M))+(r)))))*(expr[3])))+((-4)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1798(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1798] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1798] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-28)*(expr[3]))+((18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1799(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1799] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1799] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-28)*(expr[3]))+((18)*(expr[4]))))));
}
}

}
