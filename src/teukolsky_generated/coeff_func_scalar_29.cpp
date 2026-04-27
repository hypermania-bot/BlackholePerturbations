#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1450(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1450] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1450] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-47)*(expr[1]))+(((370)*(expr[2]))+(((-966)*(expr[3]))+(((1005)*(expr[4]))+((-363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1451(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1451] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1451] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-47)*(expr[1]))+(((370)*(expr[2]))+(((-966)*(expr[3]))+(((1005)*(expr[4]))+((-363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1452(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1452] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((50.7692307692307692307692307692)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((2)*(pow(a,3)))+((a)*((r)*(((137)*(M))+((2)*(r)))))))+(((12)*(((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r)))))))+(((-8)*(((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r)))))))+(((4)*(((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r)))))))+((-0.363636363636363636363636363636)*(((470)*(pow(a,3)))+((a)*((r)*(((149)*(M))+((470)*(r)))))))))))))));
} else {
coeffs[1452] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((47)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-370)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((966)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1005)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((363)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((2)*(pow(a,3)))+((a)*((r)*(((137)*(M))+((2)*(r))))))*(expr[1])))+(((30)*((((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r))))))*(expr[2])))+(((-28)*((((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r))))))*(expr[3])))+(((18)*((((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r))))))*(expr[4])))+(((-2)*((((470)*(pow(a,3)))+((a)*((r)*(((149)*(M))+((470)*(r))))))*(expr[5])))+((330)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1453(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1453] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1453] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1454(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1454] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1454] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1455(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1455] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1455] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1456(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1456] = ((1.20312500000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[1456] = ((1.20312500000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1457(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1457] = ((1.20312500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[1457] = ((1.20312500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1458(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1458] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.66233766233766233766233766234)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((-32.7272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((3.20000000000000000000000000000)*(((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r)))))))+(((-6.85714285714285714285714285714)*(((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r)))))))+((2.66666666666666666666666666667)*(((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))))))))));
} else {
coeffs[1458] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((8)*((((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r))))))*(expr[2])))+(((-24)*((((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r))))))*(expr[3])))+(((12)*((((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))*(expr[4])))+((-180)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1459(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1459] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1459] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1460(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1460] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1460] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1461(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1461] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((242)*(M))+((17)*(r)))))))+(((12)*(((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r)))))))+(((-2)*(((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r)))))))+(((1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r)))))))+((-1.33333333333333333333333333333)*(((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r))))))))))))));
} else {
coeffs[1461] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((242)*(M))+((17)*(r))))))*(expr[1]))+(((-5)*((((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r))))))*(expr[2])))+(((42)*((((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r))))))*(expr[3])))+(((-6)*((((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r))))))*(expr[4])))+(((9)*((((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r))))))*(expr[5])))+((-1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1462(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1462] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1462] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-15)*(expr[1]))+(((105)*(expr[2]))+((-105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1463(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1463] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1463] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-45)*(expr[1]))+(((175)*(expr[2]))+((-147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1464(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1464] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1464] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((300)*(expr[1]))+(((-1730)*(expr[2]))+(((2940)*(expr[3]))+((-1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1465(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1465] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1465] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((156)*(expr[1]))+(((-1050)*(expr[2]))+(((2156)*(expr[3]))+((-1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1466(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1466] = ((0.0214843750000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-46.5454545454545454545454545455));
} else {
coeffs[1466] = ((0.0214843750000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-813)*(expr[1]))+(((7070)*(expr[2]))+(((-21378)*(expr[3]))+(((26019)*(expr[4]))+((-11025)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1467(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1467] = ((0.0429687500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-46.5454545454545454545454545455));
} else {
coeffs[1467] = ((0.0429687500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-813)*(expr[1]))+(((7070)*(expr[2]))+(((-21378)*(expr[3]))+(((26019)*(expr[4]))+((-11025)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1468(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1468] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((46.5454545454545454545454545455)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((801.818181818181818181818181818)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-65.3333333333333333333333333333)*(((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r)))))))+(((0.666666666666666666666666666667)*(((58)*(pow(a,3)))+((2)*((a)*((r)*(((-871)*(M))+((29)*(r))))))))+(((-11.2000000000000000000000000000)*(((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r)))))))+((24)*(((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))))))))));
} else {
coeffs[1468] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((813)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-7070)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((21378)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-26019)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((11025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((((58)*(pow(a,3)))+((2)*((a)*((r)*(((-871)*(M))+((29)*(r)))))))*(expr[1]))+(((-28)*((((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r))))))*(expr[2])))+(((84)*((((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))*(expr[3])))+(((-294)*((((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r))))))*(expr[4])))+((4410)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1469(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1469] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1469] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-315)*(expr[1]))+(((3290)*(expr[2]))+(((-11550)*(expr[3]))+(((16065)*(expr[4]))+((-7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1470(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1470] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1470] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-315)*(expr[1]))+(((3290)*(expr[2]))+(((-11550)*(expr[3]))+(((16065)*(expr[4]))+((-7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1471(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1471] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((3198.46153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-46.6666666666666666666666666667)*(((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r)))))))+(((28)*(((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r)))))))+(((-24)*(((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r)))))))+(((-22.9090909090909090909090909091)*(((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r)))))))+((6.66666666666666666666666666667)*(((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))))))))));
} else {
coeffs[1471] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((315)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-3290)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((11550)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-16065)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((7623)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))*(expr[1])))+(((70)*((((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r))))))*(expr[2])))+(((-84)*((((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r))))))*(expr[3])))+(((30)*((((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))*(expr[4])))+(((-126)*((((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r))))))*(expr[5])))+((20790)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1472(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1472] = ((0.187500000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1472] = ((0.187500000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1473(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1473] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1473] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1474(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1474] = ((1.28906250000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1474] = ((1.28906250000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((29)*(expr[1]))+(((-266)*(expr[2]))+(((826)*(expr[3]))+(((-1029)*(expr[4]))+((441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1475(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1475] = ((1.28906250000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1475] = ((1.28906250000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((29)*(expr[1]))+(((-266)*(expr[2]))+(((826)*(expr[3]))+(((-1029)*(expr[4]))+((441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1476(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1476] = ((1.28906250000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((1.55151515151515151515151515152)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[1476] = ((1.28906250000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-29)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((266)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-826)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1029)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-441)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_1477(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1477] = ((0.0234375000000000000000000000000)*((70.7460246232959721630584574287)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((0.596736596736596736596736596737)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[1477] = ((0.0234375000000000000000000000000)*((70.7460246232959721630584574287)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-105)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((658)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((-1650)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+(((1785)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5]))))+((-693)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))));
}
}

void compute_coeffs_scalar_1478(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1478] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1478] = ((0.0156250000000000000000000000000)*((5.74456264653802865985061146822)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-15)*(expr[1]))+(((105)*(expr[2]))+((-105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1479(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1479] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1479] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((45)*(expr[1]))+(((-175)*(expr[2]))+((147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1480(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1480] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1480] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((300)*(expr[1]))+(((-1730)*(expr[2]))+(((2940)*(expr[3]))+((-1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1481(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1481] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1481] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-156)*(expr[1]))+(((1050)*(expr[2]))+(((-2156)*(expr[3]))+((1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1482(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1482] = ((0.0214843750000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-46.5454545454545454545454545455));
} else {
coeffs[1482] = ((0.0214843750000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-813)*(expr[1]))+(((7070)*(expr[2]))+(((-21378)*(expr[3]))+(((26019)*(expr[4]))+((-11025)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1483(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1483] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((46.5454545454545454545454545455)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-801.818181818181818181818181818)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((65.3333333333333333333333333333)*(((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r)))))))+(((-1.33333333333333333333333333333)*((a)*(((29)*(pow(a,2)))+((r)*(((-871)*(M))+((29)*(r)))))))+(((11.2000000000000000000000000000)*(((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r)))))))+((-24)*(((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))))))))));
} else {
coeffs[1483] = ((0.0429687500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((813)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-7070)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((21378)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-26019)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((11025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((a)*((((29)*(pow(a,2)))+((r)*(((-871)*(M))+((29)*(r)))))*(expr[1]))))+(((28)*((((38)*(pow(a,3)))+((a)*((r)*(((-581)*(M))+((38)*(r))))))*(expr[2])))+(((-84)*((((59)*(pow(a,3)))+((a)*((r)*(((-627)*(M))+((59)*(r))))))*(expr[3])))+(((294)*((((28)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((28)*(r))))))*(expr[4])))+((-4410)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1484(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1484] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1484] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-25)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((315)*(expr[1]))+(((-3290)*(expr[2]))+(((11550)*(expr[3]))+(((-16065)*(expr[4]))+((7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1485(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1485] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1485] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((315)*(expr[1]))+(((-3290)*(expr[2]))+(((11550)*(expr[3]))+(((-16065)*(expr[4]))+((7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1486(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1486] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((3198.46153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-46.6666666666666666666666666667)*(((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r)))))))+(((28)*(((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r)))))))+(((-24)*(((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r)))))))+(((-22.9090909090909090909090909091)*(((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r)))))))+((6.66666666666666666666666666667)*(((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))))))))));
} else {
coeffs[1486] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-315)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3290)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-11550)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((16065)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-7623)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))*(expr[1])))+(((70)*((((49)*(pow(a,3)))+((a)*((r)*(((-4)*(M))+((49)*(r))))))*(expr[2])))+(((-84)*((((248)*(pow(a,3)))+((a)*((r)*(((-221)*(M))+((248)*(r))))))*(expr[3])))+(((30)*((((1702)*(pow(a,3)))+((a)*((r)*(((-2333)*(M))+((1702)*(r))))))*(expr[4])))+(((-126)*((((430)*(pow(a,3)))+((a)*((r)*(((-739)*(M))+((430)*(r))))))*(expr[5])))+((20790)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1487(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1487] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1487] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1488(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1488] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1488] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1489(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1489] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1489] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1490(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1490] = ((1.20312500000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[1490] = ((1.20312500000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1491(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1491] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.66233766233766233766233766234)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((32.7272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-3.20000000000000000000000000000)*(((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r)))))))+(((6.85714285714285714285714285714)*(((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r)))))))+((-2.66666666666666666666666666667)*(((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))))))))));
} else {
coeffs[1491] = ((1.20312500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((-8)*((((8)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((8)*(r))))))*(expr[2])))+(((24)*((((11)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((11)*(r))))))*(expr[3])))+(((-12)*((((32)*(pow(a,3)))+((a)*((r)*(((-247)*(M))+((32)*(r))))))*(expr[4])))+((180)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1492(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1492] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1492] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1493(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1493] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1493] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1494(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1494] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((242)*(M))+((17)*(r)))))))+(((12)*(((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r)))))))+(((-2)*(((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r)))))))+(((1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r)))))))+((-1.33333333333333333333333333333)*(((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r)))))))))))))));
} else {
coeffs[1494] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((242)*(M))+((17)*(r))))))*(expr[1]))+(((-5)*((((61)*(pow(a,3)))+((a)*((r)*(((398)*(M))+((61)*(r))))))*(expr[2])))+(((42)*((((41)*(pow(a,3)))+((a)*((r)*(((114)*(M))+((41)*(r))))))*(expr[3])))+(((-6)*((((659)*(pow(a,3)))+((a)*((r)*(((392)*(M))+((659)*(r))))))*(expr[4])))+(((9)*((((445)*(pow(a,3)))+((a)*((r)*(((-406)*(M))+((445)*(r))))))*(expr[5])))+((-1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1495(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1495] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1495] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-4)*(expr[1]))+(((-10)*(expr[2]))+(((28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1496(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1496] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1496] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((150)*(expr[2]))+(((-196)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1497(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1497] = ((0.225585937500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-4.43290043290043290043290043290));
} else {
coeffs[1497] = ((0.225585937500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-29)*(expr[1]))+(((190)*(expr[2]))+(((-514)*(expr[3]))+(((579)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1498(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1498] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((4.43290043290043290043290043290)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-596)*(pow(a,3)))+((4)*((a)*((((1069)*(M))+((-149)*(r)))*(r))))))+(((-49.0909090909090909090909090909)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r)))))))+(((1.60000000000000000000000000000)*(((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r)))))))+((0.222222222222222222222222222222)*(((696)*(pow(a,3)))+((6)*((a)*((r)*(((-811)*(M))+((116)*(r)))))))))))))));
} else {
coeffs[1498] = ((0.451171875000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((29)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((514)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-579)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((7)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((7)*(r))))))*(expr[1])))+(((4)*((((46)*(pow(a,3)))+((a)*((r)*(((-377)*(M))+((46)*(r))))))*(expr[2])))+(((((-596)*(pow(a,3)))+((4)*((a)*((((1069)*(M))+((-149)*(r)))*(r)))))*(expr[3]))+(((((696)*(pow(a,3)))+((6)*((a)*((r)*(((-811)*(M))+((116)*(r)))))))*(expr[4]))+((-270)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1499(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1499] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1499] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((47)*(expr[1]))+(((-370)*(expr[2]))+(((966)*(expr[3]))+(((-1005)*(expr[4]))+((363)*(expr[5]))))))));
}
}

}
