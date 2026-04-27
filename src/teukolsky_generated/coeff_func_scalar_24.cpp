#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1200(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1200] = ((1.25000000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[1200] = ((1.25000000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[2])));
}
}

void compute_coeffs_scalar_1201(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1201] = ((1.25000000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[1201] = ((1.25000000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[2])));
}
}

void compute_coeffs_scalar_1202(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1202] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.400000000000000000000000000000)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-0.800000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+((1.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))))));
} else {
coeffs[1202] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2])))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+((-2)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))))));
}
}

void compute_coeffs_scalar_1203(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1203] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1203] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1204(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1204] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1204] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1205(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1205] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-26)*(M))+(r))))))+(((-0.857142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.800000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))))))));
} else {
coeffs[1205] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((6)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+((((pow(a,3))+((a)*((r)*(((-26)*(M))+(r)))))*(expr[1]))+(((2)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_1206(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1206] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1206] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1207(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1207] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1207] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1208(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1208] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((12)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+(((-6)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-2)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[1208] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-9)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((30)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+((-7)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1209(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1209] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1209] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1210(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1210] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1210] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1211(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1211] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-62)*(M))+(r))))))+(((-3.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*((pow(a,3))+((a)*((r)*(((2)*(M))+(r))))))+((-2)*((pow(a,3))+((a)*((r)*(((26)*(M))+(r)))))))))));
} else {
coeffs[1211] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((-62)*(M))+(r))))*(expr[1]))))+(((-5)*(((pow(a,3))+((a)*((r)*(((26)*(M))+(r)))))*(expr[2])))+(((21)*(((pow(a,3))+((a)*((r)*(((2)*(M))+(r)))))*(expr[3])))+((-15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1212(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1212] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1212] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1213(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1213] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1213] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1214(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1214] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-29.3333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-56)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+(((13.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((24)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[1214] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((168)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-99)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-140)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+(((84)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+((-132)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1215(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1215] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1215] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-3)*(expr[1]))));
}
}

void compute_coeffs_scalar_1216(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1216] = ((0.625000000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[1216] = ((0.625000000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+((-4)*(expr[2])))));
}
}

void compute_coeffs_scalar_1217(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1217] = ((1.25000000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[1217] = ((1.25000000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+((-4)*(expr[2])))));
}
}

void compute_coeffs_scalar_1218(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1218] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.60000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))))));
} else {
coeffs[1218] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+((4)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))))));
}
}

void compute_coeffs_scalar_1219(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1219] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1219] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((18)*(expr[1]))+((-25)*(expr[2])))));
}
}

void compute_coeffs_scalar_1220(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1220] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1220] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((18)*(expr[1]))+((-25)*(expr[2])))));
}
}

void compute_coeffs_scalar_1221(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1221] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((8.57142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((5)*(r)))))))+((-0.800000000000000000000000000000)*((a)*(((16)*(pow(a,2)))+((r)*(((-7)*(M))+((16)*(r)))))))))));
} else {
coeffs[1221] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-18)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((5)*(r))))))*(expr[1])))+(((-2)*((a)*((((16)*(pow(a,2)))+((r)*(((-7)*(M))+((16)*(r)))))*(expr[2]))))+((30)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_1222(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1222] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1222] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+(((75)*(expr[2]))+((-56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1223(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1223] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1223] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+(((75)*(expr[2]))+((-56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1224(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1224] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((4)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))+((-4)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))))));
} else {
coeffs[1224] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((30)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((56)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[1])))+(((-10)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[2])))+((14)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1225(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1225] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1225] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-45)*(expr[1]))+(((175)*(expr[2]))+((-147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1226(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1226] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1226] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-45)*(expr[1]))+(((175)*(expr[2]))+((-147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1227(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1227] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((46.6666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-12)*(((8)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((8)*(r)))))))+(((-1.33333333333333333333333333333)*(((14)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((14)*(r)))))))+((4)*(((17)*(pow(a,3)))+((a)*((r)*((M)+((17)*(r)))))))))))));
} else {
coeffs[1227] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-175)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((147)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((14)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((14)*(r))))))*(expr[1])))+(((10)*((((17)*(pow(a,3)))+((a)*((r)*((M)+((17)*(r))))))*(expr[2])))+(((-42)*((((8)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((8)*(r))))))*(expr[3])))+((210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1228(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1228] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1228] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((105)*(expr[1]))+(((-455)*(expr[2]))+(((735)*(expr[3]))+((-396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1229(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1229] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1229] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((105)*(expr[1]))+(((-455)*(expr[2]))+(((735)*(expr[3]))+((-396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1230(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1230] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((-6.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((58.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((28)*(((2)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((2)*(r)))))))+((-12)*(((9)*(pow(a,3)))+((a)*((r)*(((-53)*(M))+((9)*(r))))))))))));
} else {
coeffs[1230] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-105)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((455)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-735)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((396)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((-10)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((70)*((((2)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((2)*(r))))))*(expr[2])))+(((-42)*((((9)*(pow(a,3)))+((a)*((r)*(((-53)*(M))+((9)*(r))))))*(expr[3])))+((264)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1231(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1231] = ((7.50000000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.266666666666666666666666666667));
} else {
coeffs[1231] = ((7.50000000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(expr[2])));
}
}

void compute_coeffs_scalar_1232(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1232] = ((7.50000000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.266666666666666666666666666667));
} else {
coeffs[1232] = ((7.50000000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(expr[2])));
}
}

void compute_coeffs_scalar_1233(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1233] = ((7.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((0.400000000000000000000000000000)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.666666666666666666666666666667)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[1233] = ((7.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1]))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2]))));
}
}

void compute_coeffs_scalar_1234(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1234] = ((0.750000000000000000000000000000)*((4.18330013267037773989086012893)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((0.304761904761904761904761904762)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[1234] = ((0.750000000000000000000000000000)*((4.18330013267037773989086012893)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_1235(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1235] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1235] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_1236(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1236] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1236] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_1237(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1237] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1237] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))));
}
}

void compute_coeffs_scalar_1238(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1238] = ((0.937500000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-2)*(M))+(r))))))));
} else {
coeffs[1238] = ((0.937500000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[1]))+(((-15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((35)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+((-21)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_1239(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1239] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1239] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1240(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1240] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1240] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1241(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1241] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1241] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((63)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))));
}
}

void compute_coeffs_scalar_1242(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1242] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1242] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((3)*(expr[1]))));
}
}

void compute_coeffs_scalar_1243(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1243] = ((0.625000000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[1243] = ((0.625000000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+((-4)*(expr[2])))));
}
}

void compute_coeffs_scalar_1244(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1244] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.60000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((-1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))))));
} else {
coeffs[1244] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+((-4)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))))));
}
}

void compute_coeffs_scalar_1245(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1245] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1245] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-18)*(expr[1]))+((25)*(expr[2])))));
}
}

void compute_coeffs_scalar_1246(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1246] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1246] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-18)*(expr[1]))+((25)*(expr[2])))));
}
}

void compute_coeffs_scalar_1247(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1247] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((8.57142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((5)*(r)))))))+((-0.800000000000000000000000000000)*((a)*(((16)*(pow(a,2)))+((r)*(((-7)*(M))+((16)*(r))))))))))));
} else {
coeffs[1247] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((18)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((5)*(r))))))*(expr[1])))+(((-2)*((a)*((((16)*(pow(a,2)))+((r)*(((-7)*(M))+((16)*(r)))))*(expr[2]))))+((30)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_1248(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1248] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1248] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+(((75)*(expr[2]))+((-56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1249(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1249] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((-4)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((-4)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))+((4)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))))));
} else {
coeffs[1249] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((30)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((56)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[1])))+(((10)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[2])))+((-14)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

}
