#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1600(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1600] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1600] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1601(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1601] = ((0.750000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((-6)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*(((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r)))))))+((-2)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))))))));
} else {
coeffs[1601] = ((0.750000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-9)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((15)*((((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r))))))*(expr[2])))+((-7)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1602(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1602] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1602] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1603(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1603] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1603] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1604(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1604] = ((0.125000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-17)*(M))+(r))))))+(((-3.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+((-2)*((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))))))));
} else {
coeffs[1604] = ((0.125000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((-17)*(M))+(r))))*(expr[1]))))+(((-5)*(((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))*(expr[2])))+(((21)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[3])))+((-15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1605(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1605] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1605] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1606(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1606] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1606] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1607(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1607] = ((0.312500000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((13.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-28)*(((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r)))))))+(((24)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r)))))))+((-7.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))))))));
} else {
coeffs[1607] = ((0.312500000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((168)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-99)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r))))))*(expr[2])))+(((84)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3])))+((-33)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1608(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1608] = ((1.87500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((6)*((pow(M,2))*(pow(r,2))))+((-3)*((M)*(pow(r,3))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.06666666666666666666666666667));
} else {
coeffs[1608] = ((1.87500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((6)*((pow(M,2))*(pow(r,2))))+((-3)*((M)*(pow(r,3))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_1609(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1609] = ((1.87500000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.06666666666666666666666666667));
} else {
coeffs[1609] = ((1.87500000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_1610(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1610] = ((3.75000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((1.06666666666666666666666666667)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[1610] = ((3.75000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))));
}
}

void compute_coeffs_scalar_1611(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1611] = ((3.75000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-0.800000000000000000000000000000)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.952380952380952380952380952381)*((pow(a,3))+((a)*((r)*(((-2)*(M))+(r))))))));
} else {
coeffs[1611] = ((3.75000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[1]))+(((-2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[3])))));
}
}

void compute_coeffs_scalar_1612(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1612] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((6)*((pow(M,2))*(pow(r,2))))+((-3)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1612] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((6)*((pow(M,2))*(pow(r,2))))+((-3)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1613(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1613] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1613] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1614(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1614] = ((1.87500000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[1614] = ((1.87500000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_1615(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1615] = ((1.87500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1615] = ((1.87500000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-7)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_1616(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1616] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((6)*((pow(M,2))*(pow(r,2))))+((-3)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1616] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((6)*((pow(M,2))*(pow(r,2))))+((-3)*((M)*(pow(r,3)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1617(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1617] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1617] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1618(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1618] = ((0.468750000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1618] = ((0.468750000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_1619(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1619] = ((0.625000000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[1619] = ((0.625000000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[2])));
}
}

void compute_coeffs_scalar_1620(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1620] = ((2.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.400000000000000000000000000000)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.400000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r)))))))))));
} else {
coeffs[1620] = ((2.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2])))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+((((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r))))))*(expr[2]))))));
}
}

void compute_coeffs_scalar_1621(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1621] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1621] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1622(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1622] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1622] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1623(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1623] = ((1.25000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-0.857142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.400000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r)))))))))));
} else {
coeffs[1623] = ((1.25000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-6)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+((((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[1]))+(((((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r))))))*(expr[2]))+((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_1624(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1624] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1624] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1625(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1625] = ((0.750000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((6)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-6)*(((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r)))))))+((2)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))))))));
} else {
coeffs[1625] = ((0.750000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((9)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-15)*((((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r))))))*(expr[2])))+((7)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1626(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1626] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1626] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1627(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1627] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1627] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1628(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1628] = ((0.125000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-17)*(M))+(r))))))+(((-3.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+((-2)*((pow(a,3))+((a)*((r)*(((5)*(M))+(r))))))))))));
} else {
coeffs[1628] = ((0.125000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((-17)*(M))+(r))))*(expr[1]))))+(((-5)*(((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))*(expr[2])))+(((21)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[3])))+((-15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1629(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1629] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1629] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-6)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1630(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1630] = ((0.312500000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((-13.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((28)*(((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r)))))))+(((-24)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r)))))))+((7.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))))))));
} else {
coeffs[1630] = ((0.312500000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((168)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-99)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((70)*((((2)*(pow(a,3)))+((a)*((r)*(((-5)*(M))+((2)*(r))))))*(expr[2])))+(((-84)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3])))+((33)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1631(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1631] = ((0.312500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-6.40000000000000000000000000000));
} else {
coeffs[1631] = ((0.312500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-6)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_1632(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1632] = ((0.625000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((6.40000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((-0.800000000000000000000000000000)*((a)*(((2)*(pow(a,2)))+((r)*(((-5)*(M))+((2)*(r)))))))))));
} else {
coeffs[1632] = ((0.625000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((6)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2]))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+((-2)*((a)*((((2)*(pow(a,2)))+((r)*(((-5)*(M))+((2)*(r)))))*(expr[2]))))))));
}
}

void compute_coeffs_scalar_1633(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1633] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1633] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+((10)*(expr[2]))));
}
}

void compute_coeffs_scalar_1634(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1634] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1634] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+((10)*(expr[2]))));
}
}

void compute_coeffs_scalar_1635(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1635] = ((0.125000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((4)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+((-2.47619047619047619047619047619)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))))));
} else {
coeffs[1635] = ((0.125000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2]))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((10)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_1636(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1636] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1636] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1637(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1637] = ((0.375000000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((2)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*((M)+(r))))))+((-2)*(((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r)))))))))));
} else {
coeffs[1637] = ((0.375000000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((3)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[1])))+(((10)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[2])))+((-7)*((((3)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1638(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1638] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1638] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-35)*(expr[2]))+((42)*(expr[3])))));
}
}

void compute_coeffs_scalar_1639(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1639] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1639] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-35)*(expr[2]))+((42)*(expr[3])))));
}
}

void compute_coeffs_scalar_1640(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1640] = ((0.125000000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((6)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-14)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+((8)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))))))));
} else {
coeffs[1640] = ((0.125000000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-42)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((7)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-35)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+(((21)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[3])))+((15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1641(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1641] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1641] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+((-3)*((M)*(pow(r,3)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-420)*(expr[1]))+(((1190)*(expr[2]))+(((-420)*(expr[3]))+((-495)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1642(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1642] = ((0.00781250000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-68)*((a)*((M)*(r))))+(((-26.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((-56)*(((2)*(pow(a,3)))+((a)*((r)*(((13)*(M))+((2)*(r)))))))+(((-73.3333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r)))))))+((48)*(((9)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((9)*(r))))))))))));
} else {
coeffs[1642] = ((0.00781250000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((495)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-34)*((a)*((M)*((r)*(expr[0])))))+(((-40)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((-140)*((((2)*(pow(a,3)))+((a)*((r)*(((13)*(M))+((2)*(r))))))*(expr[2])))+(((168)*((((9)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((9)*(r))))))*(expr[3])))+((-330)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1643(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1643] = ((0.328125000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.04761904761904761904761904762));
} else {
coeffs[1643] = ((0.328125000000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-5)*(expr[1]))+(((5)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_1644(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1644] = ((0.656250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.04761904761904761904761904762));
} else {
coeffs[1644] = ((0.656250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-5)*(expr[1]))+(((5)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_1645(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1645] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.285714285714285714285714285714)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((3.33333333333333333333333333333)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((0.285714285714285714285714285714)*(((-4)*(pow(a,3)))+((a)*((((11)*(M))+((-4)*(r)))*(r)))))+((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))))));
} else {
coeffs[1645] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[1]))+(((15)*((a)*((M)*((r)*(expr[2])))))+((((-4)*(pow(a,3)))+((a)*((((11)*(M))+((-4)*(r)))*(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_1646(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1646] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1646] = ((0.328125000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((-5)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1647(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1647] = ((0.656250000000000000000000000000)*((1.73205080756887729352744634151)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1647] = ((0.656250000000000000000000000000)*((1.73205080756887729352744634151)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((-5)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1648(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1648] = ((1.31250000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-6)*(pow(a,3)))+((3)*((a)*((((11)*(M))+((-2)*(r)))*(r))))))+(((-0.444444444444444444444444444444)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((2)*(pow(a,2)))+((r)*(((5)*(M))+((2)*(r)))))))))))));
} else {
coeffs[1648] = ((1.31250000000000000000000000000)*((1.73205080756887729352744634151)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((2)*(pow(a,2)))+((r)*(((5)*(M))+((2)*(r)))))*(expr[1]))))+(((5)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((((-6)*(pow(a,3)))+((3)*((a)*((((11)*(M))+((-2)*(r)))*(r)))))*(expr[3]))+((-2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1649(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1649] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1649] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((6)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((28)*(expr[1]))+(((-70)*(expr[2]))+(((28)*(expr[3]))+((15)*(expr[4])))))));
}
}

}
