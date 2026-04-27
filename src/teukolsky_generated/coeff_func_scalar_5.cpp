#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_250(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[250] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-456)*(pow(a,3)))+((3)*((a)*((((241)*(M))+((-152)*(r)))*(r))))))+(((38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+(((8)*(((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r)))))))+((-2.40000000000000000000000000000)*(((16)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((16)*(r)))))))))))));
} else {
coeffs[250] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[1])))+(((-6)*((((16)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((16)*(r))))))*(expr[2])))+(((28)*((((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r))))))*(expr[3])))+(((((-456)*(pow(a,3)))+((3)*((a)*((((241)*(M))+((-152)*(r)))*(r)))))*(expr[4]))+((210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_251(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[251] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[251] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_252(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[252] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-84)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+(((6)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((42)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((-6)*(((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r)))))))+((4)*(((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r)))))))))))));
} else {
coeffs[252] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((9)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[1])))+(((-210)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((14)*((((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r))))))*(expr[3])))+(((-27)*((((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r))))))*(expr[4])))+((231)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_253(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[253] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[253] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_254(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[254] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[254] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-60)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_255(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[255] = ((0.562500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(3.55555555555555555555555555556));
} else {
coeffs[255] = ((0.562500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((13)*(expr[1]))+(((-20)*(expr[2]))+(((-35)*(expr[3]))+((49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_256(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[256] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-1.55555555555555555555555555556)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-21.7777777777777777777777777778)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r)))))))+(((4)*(((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r)))))))+((-0.800000000000000000000000000000)*((a)*(((37)*(pow(a,2)))+((r)*(((-54)*(M))+((37)*(r)))))))))))));
} else {
coeffs[256] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-13)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r))))))*(expr[1])))+(((-2)*((a)*((((37)*(pow(a,2)))+((r)*(((-54)*(M))+((37)*(r)))))*(expr[2]))))+(((14)*((((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r))))))*(expr[3])))+((-98)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_257(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[257] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[257] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-42)*(expr[1]))+(((210)*(expr[2]))+(((-350)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_258(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[258] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[258] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-42)*(expr[1]))+(((210)*(expr[2]))+(((-350)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_259(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[259] = ((0.0937500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[259] = ((0.0937500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((42)*(expr[1]))+(((-210)*(expr[2]))+(((350)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_260(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[260] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-52)*((a)*((M)*(r))))+(((-5.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-32)*(M))+(r))))))+(((-19.0909090909090909090909090909)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2)*(((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r)))))))+((1.33333333333333333333333333333)*(((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r)))))))))))));
} else {
coeffs[260] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((42)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-84)*((a)*((M)*((r)*(expr[1])))))+(((-14)*(((pow(a,3))+((a)*((r)*(((-32)*(M))+(r)))))*(expr[2])))+(((-7)*((((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r))))))*(expr[3])))+(((6)*((((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r))))))*(expr[4])))+((-105)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_261(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[261] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[261] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((21)*(expr[1]))+(((-210)*(expr[2]))+(((2674)*(expr[3]))+(((-5805)*(expr[4]))+((3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_262(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[262] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-68)*((a)*((M)*(r))))+(((-210)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((56)*(((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r)))))))+(((-2)*(((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r)))))))+(((12)*(((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r)))))))+((-4)*(((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r)))))))))))));
} else {
coeffs[262] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2674)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((5805)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-3465)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-34)*((a)*((M)*((r)*(expr[0])))))+(((-3)*((((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r))))))*(expr[1])))+(((140)*((((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r))))))*(expr[2])))+(((-14)*((((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r))))))*(expr[3])))+(((54)*((((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r))))))*(expr[4])))+((-1155)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_263(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[263] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[263] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((5)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_264(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[264] = ((0.984375000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.01587301587301587301587301587));
} else {
coeffs[264] = ((0.984375000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-7)*(expr[1]))+(((15)*(expr[2]))+(((-5)*(expr[3]))+((-4)*(expr[4])))))));
}
}

void compute_coeffs_scalar_265(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[265] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.984126984126984126984126984127)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-16)*(pow(a,3)))+((a)*((((17)*(M))+((-16)*(r)))*(r)))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+((0.400000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((37)*(M))+((4)*(r))))))))))));
} else {
coeffs[265] = ((3.93750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((-21)*((a)*((M)*((r)*(expr[1])))))+(((((4)*(pow(a,3)))+((a)*((r)*(((37)*(M))+((4)*(r))))))*(expr[2]))+(((((-16)*(pow(a,3)))+((a)*((((17)*(M))+((-16)*(r)))*(r))))*(expr[3]))+((12)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_266(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[266] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[266] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((140)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_267(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[267] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[267] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((140)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_268(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[268] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[268] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-140)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_269(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[269] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*(r))))+(((-24)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((5.45454545454545454545454545455)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((5.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+(((-1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r)))))))+((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+((a)*((r)*(((-259)*(M))+((8)*(r)))))))))))));
} else {
coeffs[269] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r))))))*(expr[1])))+(((14)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[2])))+(((-84)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+(((((8)*(pow(a,3)))+((a)*((r)*(((-259)*(M))+((8)*(r))))))*(expr[4]))+((30)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_270(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[270] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[270] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((54)*(expr[1]))+(((-210)*(expr[2]))+(((224)*(expr[3]))+(((45)*(expr[4]))+((-110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_271(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[271] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-18)*((a)*((M)*(r))))+(((10)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((12)*(((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r)))))))+(((-4)*(((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r)))))))+(((0.666666666666666666666666666667)*(((11)*(pow(a,3)))+((a)*((r)*(((140)*(M))+((11)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((188)*(pow(a,2)))+((r)*(((-421)*(M))+((188)*(r)))))))))))));
} else {
coeffs[271] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-54)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-224)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((110)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-9)*((a)*((M)*((r)*(expr[0])))))+(((((11)*(pow(a,3)))+((a)*((r)*(((140)*(M))+((11)*(r))))))*(expr[1]))+(((-10)*((((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r))))))*(expr[2])))+(((42)*((((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r))))))*(expr[3])))+(((-3)*((a)*((((188)*(pow(a,2)))+((r)*(((-421)*(M))+((188)*(r)))))*(expr[4]))))+((55)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_272(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[272] = ((0.984375000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.03174603174603174603174603175));
} else {
coeffs[272] = ((0.984375000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((4)*(expr[1]))+(((-10)*(expr[2]))+(((4)*(expr[3]))+(expr[4]))))));
}
}

void compute_coeffs_scalar_273(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[273] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.22222222222222222222222222222)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.190476190476190476190476190476)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-0.888888888888888888888888888889)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+((1.14285714285714285714285714286)*((pow(a,3))+((a)*((r)*(((2)*(M))+(r))))))))))));
} else {
coeffs[273] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[1])))+(((4)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((4)*(((pow(a,3))+((a)*((r)*(((2)*(M))+(r)))))*(expr[3])))+((-4)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_274(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[274] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[274] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-28)*(expr[3]))+((18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_275(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[275] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[275] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-28)*(expr[3]))+((18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_276(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[276] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[276] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((28)*(expr[3]))+((-18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_277(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[277] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-12.1090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*((pow(a,3))+((a)*((r)*(((14)*(M))+(r))))))+((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[277] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-18)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((3)*(((pow(a,3))+((a)*((r)*(((14)*(M))+(r)))))*(expr[1])))+(((-28)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((14)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((-12)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[4])))+((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_278(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[278] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[278] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-51)*(expr[1]))+(((210)*(expr[2]))+(((-238)*(expr[3]))+(((45)*(expr[4]))+((33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_279(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[279] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-16)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r)))))))+(((-8)*(((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r)))))))+(((-4)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+((8)*(((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r))))))))))))));
} else {
coeffs[279] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((51)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((238)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((6)*((((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r))))))*(expr[1])))+(((-40)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[2])))+(((-28)*((((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r))))))*(expr[3])))+(((36)*((((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r))))))*(expr[4])))+((-22)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_280(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[280] = ((0.644531250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.55151515151515151515151515152));
} else {
coeffs[280] = ((0.644531250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((-14)*(expr[2]))+(((14)*(expr[3]))+(((-3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_281(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[281] = ((1.28906250000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.55151515151515151515151515152));
} else {
coeffs[281] = ((1.28906250000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((-14)*(expr[2]))+(((14)*(expr[3]))+(((-3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_282(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[282] = ((0.644531250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[282] = ((0.644531250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((14)*(expr[2]))+(((-14)*(expr[3]))+(((3)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_283(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[283] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.448484848484848484848484848485)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-30)*((a)*((M)*(r))))+(((0.181818181818181818181818181818)*(((-4)*(pow(a,3)))+((a)*((((13)*(M))+((-4)*(r)))*(r)))))+(((0.400000000000000000000000000000)*(((-8)*(pow(a,3)))+((2)*((a)*((((43)*(M))+((-4)*(r)))*(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((8)*(r)))))))))))));
} else {
coeffs[283] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((-5)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[1]))+(((((-8)*(pow(a,3)))+((2)*((a)*((((43)*(M))+((-4)*(r)))*(r)))))*(expr[2]))+(((-70)*((a)*((M)*((r)*(expr[3])))))+(((((8)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((8)*(r))))))*(expr[4]))+((((-4)*(pow(a,3)))+((a)*((((13)*(M))+((-4)*(r)))*(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_284(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[284] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[284] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((14)*(expr[3]))+(((-27)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_285(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[285] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[285] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((14)*(expr[3]))+(((-27)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_286(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[286] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[286] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-14)*(expr[3]))+(((27)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_287(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[287] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-34)*(pow(a,3)))+((a)*((((203)*(M))+((-34)*(r)))*(r)))))+(((0.909090909090909090909090909091)*((pow(a,3))+((a)*((r)*(((-13)*(M))+(r))))))+(((0.461538461538461538461538461538)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((43)*(M))+(r))))))+(((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r)))))))+((-0.400000000000000000000000000000)*((a)*(((17)*(pow(a,2)))+((r)*(((16)*(M))+((17)*(r)))))))))))))));
} else {
coeffs[287] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-5)*((a)*((M)*((r)*(expr[0])))))+((((pow(a,3))+((a)*((r)*(((43)*(M))+(r)))))*(expr[1]))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((16)*(M))+((17)*(r)))))*(expr[2]))))+(((14)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((-34)*(pow(a,3)))+((a)*((((203)*(M))+((-34)*(r)))*(r))))*(expr[4]))+(((5)*(((pow(a,3))+((a)*((r)*(((-13)*(M))+(r)))))*(expr[5])))+((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_288(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[288] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[288] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((28)*(expr[3]))+((-18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_289(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[289] = ((0.515625000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(3.87878787878787878787878787879));
} else {
coeffs[289] = ((0.515625000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((4)*(expr[0]))+(((-39)*(expr[1]))+(((140)*(expr[2]))+(((-154)*(expr[3]))+(((24)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_290(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[290] = ((0.515625000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(3.87878787878787878787878787879));
} else {
coeffs[290] = ((0.515625000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((4)*(expr[0]))+(((-39)*(expr[1]))+(((140)*(expr[2]))+(((-154)*(expr[3]))+(((24)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_291(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[291] = ((0.257812500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.87878787878787878787878787879));
} else {
coeffs[291] = ((0.257812500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((39)*(expr[1]))+(((-140)*(expr[2]))+(((154)*(expr[3]))+(((-24)*(expr[4]))+((-25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_292(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[292] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-3.87878787878787878787878787879)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*(r))))+(((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-142)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-41)*(M))+(r))))))+(((8)*(((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r)))))))+(((3.63636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+((-0.888888888888888888888888888889)*(((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))))))))));
} else {
coeffs[292] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((39)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((154)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-24)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-41)*(M))+(r)))))*(expr[1])))+(((4)*(((pow(a,3))+((a)*((r)*(((-142)*(M))+(r)))))*(expr[2])))+(((28)*((((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r))))))*(expr[3])))+(((-4)*((((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))*(expr[4])))+((20)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_293(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[293] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[293] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((220)*(expr[2]))+(((-896)*(expr[3]))+(((1170)*(expr[4]))+((-484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_294(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[294] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[294] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((220)*(expr[2]))+(((-896)*(expr[3]))+(((1170)*(expr[4]))+((-484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_295(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[295] = ((0.00585937500000000000000000000000)*((18.9076704011890370163895545528)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[295] = ((0.00585937500000000000000000000000)*((18.9076704011890370163895545528)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-220)*(expr[2]))+(((896)*(expr[3]))+(((-1170)*(expr[4]))+((484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_296(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[296] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-41)*(pow(a,3)))+((a)*((((130)*(M))+((-41)*(r)))*(r)))))+(((0.181818181818181818181818181818)*(((-5)*(pow(a,3)))+((a)*((((1946)*(M))+((-5)*(r)))*(r)))))+(((0.222222222222222222222222222222)*(((758)*(pow(a,3)))+(((-6196)*((a)*((M)*(r))))+((758)*((a)*(pow(r,2)))))))+(((-25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*(((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r)))))))+((2)*(((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))))))))));
} else {
coeffs[296] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-220)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((896)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((484)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((((-41)*(pow(a,3)))+((a)*((((130)*(M))+((-41)*(r)))*(r))))*(expr[1]))+(((5)*((((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))*(expr[2])))+(((-14)*((((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r))))))*(expr[3])))+(((((758)*(pow(a,3)))+(((-6196)*((a)*((M)*(r))))+((758)*((a)*(pow(r,2))))))*(expr[4]))+(((((-5)*(pow(a,3)))+((a)*((((1946)*(M))+((-5)*(r)))*(r))))*(expr[5]))+((-165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_297(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[297] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[297] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-28)*(expr[1]))+(((70)*(expr[2]))+(((-28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_298(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[298] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[298] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-140)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_299(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[299] = ((0.128906250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.75757575757575757575757575758));
} else {
coeffs[299] = ((0.128906250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((83)*(expr[1]))+(((-350)*(expr[2]))+(((350)*(expr[3]))+(((141)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

}
