#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_650(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[650] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[650] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_651(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[651] = ((1.09375000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.82857142857142857142857142857));
} else {
coeffs[651] = ((1.09375000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((11)*(expr[2]))+((-9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_652(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[652] = ((1.09375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.171428571428571428571428571429)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((6.09523809523809523809523809524)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((-1.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((4)*(r)))))))))));
} else {
coeffs[652] = ((1.09375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((-4)*((((4)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((4)*(r))))))*(expr[2])))+((12)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_653(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[653] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[653] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_654(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[654] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[654] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_655(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[655] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((9.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((12)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((16)*(M))+(r))))))+((-0.571428571428571428571428571429)*(((33)*(pow(a,3)))+((a)*((r)*(((32)*(M))+((33)*(r)))))))))))));
} else {
coeffs[655] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((16)*(M))+(r)))))*(expr[1])))+(((30)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((-2)*((((33)*(pow(a,3)))+((a)*((r)*(((32)*(M))+((33)*(r))))))*(expr[3])))+((42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_656(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[656] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[656] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_657(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[657] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((16)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-24)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+((2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))))))));
} else {
coeffs[657] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[2])))+(((-84)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[3])))+((12)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_658(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[658] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[658] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_659(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[659] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[659] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_660(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[660] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((54)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-56)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((12)*(((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r)))))))+(((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((206)*(M))+((17)*(r)))))))+((-2.66666666666666666666666666667)*(((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r)))))))))))));
} else {
coeffs[660] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-588)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((297)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((206)*(M))+((17)*(r))))))*(expr[1]))+(((-140)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((42)*((((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r))))))*(expr[3])))+(((-12)*((((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r))))))*(expr[4])))+((297)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_661(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[661] = ((0.820312500000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.21904761904761904761904761905));
} else {
coeffs[661] = ((0.820312500000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-1)*(expr[1]))+(((-1)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_662(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[662] = ((1.64062500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.28571428571428571428571428571)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.06666666666666666666666666667)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-0.571428571428571428571428571429)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+((0.400000000000000000000000000000)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r)))))))))))));
} else {
coeffs[662] = ((1.64062500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1]))+(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2]))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r)))))))*(expr[2]))+((-2)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_663(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[663] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[663] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_664(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[664] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[664] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_665(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[665] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[665] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_666(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[666] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-48)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-29)*(M))+(r))))))+(((-0.888888888888888888888888888889)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((1.71428571428571428571428571429)*((pow(a,3))+((a)*((r)*(((5)*(M))+(r))))))))));
} else {
coeffs[666] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((-29)*(M))+(r)))))*(expr[1])))+(((-90)*((a)*((M)*((r)*(expr[2])))))+(((6)*(((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))*(expr[3])))+((-4)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_667(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[667] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[667] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((10)*(expr[2]))+(((-28)*(expr[3]))+((15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_668(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[668] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((16)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+(((-8)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+((-1.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))))))));
} else {
coeffs[668] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((8)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((-20)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((56)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3])))+((-6)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_669(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[669] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[669] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-24)*((M)*(pow(r,3))))+((12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((70)*(expr[2]))+(((-84)*(expr[3]))+((33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_670(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[670] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[670] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_671(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[671] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[671] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_672(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[672] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((180)*((a)*((M)*(r))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((-4)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-8)*((pow(a,3))+((a)*((r)*(((16)*(M))+(r))))))+((1.33333333333333333333333333333)*(((8)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((8)*(r)))))))))))));
} else {
coeffs[672] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[1])))+(((420)*((a)*((M)*((r)*(expr[2])))))+(((-28)*(((pow(a,3))+((a)*((r)*(((16)*(M))+(r)))))*(expr[3])))+(((6)*((((8)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((8)*(r))))))*(expr[4])))+((-22)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_673(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[673] = ((1.96875000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.01587301587301587301587301587));
} else {
coeffs[673] = ((1.96875000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-2)*(expr[1]))+(((2)*(expr[3]))+((-1)*(expr[4]))))));
}
}

void compute_coeffs_scalar_674(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[674] = ((1.96875000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[674] = ((1.96875000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+(((-2)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_675(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[675] = ((0.984375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[675] = ((0.984375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+(((-2)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_676(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[676] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.984126984126984126984126984127)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((6)*(pow(a,3)))+(((-28)*((a)*((M)*(r))))+((6)*((a)*(pow(r,2)))))))+(((-0.444444444444444444444444444444)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-2.40000000000000000000000000000)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))))))));
} else {
coeffs[676] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((-6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((((6)*(pow(a,3)))+(((-28)*((a)*((M)*(r))))+((6)*((a)*(pow(r,2))))))*(expr[3]))+((-2)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_677(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[677] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[677] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_678(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[678] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[678] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_679(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[679] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[679] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_680(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[680] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((-2)*((pow(a,3))+((a)*((r)*(((-34)*(M))+(r))))))+(((0.909090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+((0.285714285714285714285714285714)*(((6)*(pow(a,3)))+((2)*((a)*((r)*(((106)*(M))+((3)*(r)))))))))))))));
} else {
coeffs[680] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-30)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((-3)*(((pow(a,3))+((a)*((r)*(((-34)*(M))+(r)))))*(expr[1])))+(((4)*(((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[2])))+(((((6)*(pow(a,3)))+((2)*((a)*((r)*(((106)*(M))+((3)*(r)))))))*(expr[3]))+(((-12)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[4])))+((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_681(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[681] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[681] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((15)*(expr[1]))+(((-70)*(expr[3]))+(((90)*(expr[4]))+((-33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_682(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[682] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[682] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-15)*(expr[1]))+(((70)*(expr[3]))+(((-90)*(expr[4]))+((33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_683(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[683] = ((0.0234375000000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[683] = ((0.0234375000000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-15)*(expr[1]))+(((70)*(expr[3]))+(((-90)*(expr[4]))+((33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_684(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[684] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((32)*((a)*((M)*(r))))+(((40)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((40)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-10)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))+(((-20)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))+((-2)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))))))));
} else {
coeffs[684] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*((r)*(expr[0])))))+(((-15)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((100)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-70)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((180)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))+((-11)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_685(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[685] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[685] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_686(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[686] = ((0.492187500000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.03174603174603174603174603175));
} else {
coeffs[686] = ((0.492187500000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-1)*(expr[1]))+(((15)*(expr[2]))+(((-31)*(expr[3]))+((16)*(expr[4])))))));
}
}

void compute_coeffs_scalar_687(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[687] = ((0.984375000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[687] = ((0.984375000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+(((-15)*(expr[2]))+(((31)*(expr[3]))+((-16)*(expr[4])))))));
}
}

void compute_coeffs_scalar_688(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[688] = ((0.492187500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[688] = ((0.492187500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+(((-15)*(expr[2]))+(((31)*(expr[3]))+((-16)*(expr[4])))))));
}
}

void compute_coeffs_scalar_689(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[689] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.0317460317460317460317460317460)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((7.20000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+((-1.71428571428571428571428571429)*(((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r)))))))))))));
} else {
coeffs[689] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((31)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-16)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[1])))+(((18)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((-6)*((((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r))))))*(expr[3])))+((24)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_690(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[690] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[690] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-150)*(expr[2]))+(((196)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_691(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[691] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[691] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((150)*(expr[2]))+(((-196)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_692(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[692] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[692] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((150)*(expr[2]))+(((-196)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_693(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[693] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-10.9090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((52)*(M))+(r))))))+(((4.80000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r)))))))+(((-6.85714285714285714285714285714)*(((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r)))))))+((0.444444444444444444444444444444)*(((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r)))))))))))));
} else {
coeffs[693] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((150)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((52)*(M))+(r)))))*(expr[1])))+(((12)*((((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r))))))*(expr[2])))+(((-24)*((((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r))))))*(expr[3])))+(((2)*((((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r))))))*(expr[4])))+((-60)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_694(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[694] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[694] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((9)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-40)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((196)*(expr[3]))+(((-225)*(expr[4]))+((88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_695(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[695] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[695] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-196)*(expr[3]))+(((225)*(expr[4]))+((-88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_696(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[696] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[696] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-196)*(expr[3]))+(((225)*(expr[4]))+((-88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_697(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[697] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((4)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((24)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((-8)*(((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r)))))))+(((4)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+((-4)*(((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r)))))))))))));
} else {
coeffs[697] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-88)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((-20)*((((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r))))))*(expr[2])))+(((84)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[3])))+(((-18)*((((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r))))))*(expr[4])))+((22)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_698(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[698] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[698] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[2]))+((-14)*(expr[3])))));
}
}

void compute_coeffs_scalar_699(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[699] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[699] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-20)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

}
