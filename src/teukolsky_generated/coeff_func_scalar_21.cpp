#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1050(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1050] = ((1.64062500000000000000000000000)*((6.24499799839839820584689312094)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1050] = ((1.64062500000000000000000000000)*((6.24499799839839820584689312094)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-20)*(expr[2]))+(((42)*(expr[3]))+(((-36)*(expr[4]))+((11)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1051(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1051] = ((0.820312500000000000000000000000)*((6.24499799839839820584689312094)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1051] = ((0.820312500000000000000000000000)*((6.24499799839839820584689312094)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-20)*(expr[2]))+(((42)*(expr[3]))+(((-36)*(expr[4]))+((11)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1052(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1052] = ((9.84375000000000000000000000000)*((6.24499799839839820584689312094)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1052] = ((9.84375000000000000000000000000)*((6.24499799839839820584689312094)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((3)*(expr[1]))+(((-20)*(expr[2]))+(((42)*(expr[3]))+(((-36)*(expr[4]))+((11)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1053(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1053] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1053] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1054(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1054] = ((1.40625000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.42222222222222222222222222222));
} else {
coeffs[1054] = ((1.40625000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((16)*(expr[1]))+(((-78)*(expr[2]))+(((112)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1055(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1055] = ((1.40625000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.42222222222222222222222222222));
} else {
coeffs[1055] = ((1.40625000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((16)*(expr[1]))+(((-78)*(expr[2]))+(((112)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1056(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1056] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.42222222222222222222222222222));
} else {
coeffs[1056] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((16)*(expr[1]))+(((-78)*(expr[2]))+(((112)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1057(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1057] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1057] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1058(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1058] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1058] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1059(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1059] = ((0.468750000000000000000000000000)*((11.6833214455479226106621848926)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1059] = ((0.468750000000000000000000000000)*((11.6833214455479226106621848926)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1060(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1060] = ((1.87500000000000000000000000000)*((1.22474487139158904909864203735)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1060] = ((1.87500000000000000000000000000)*((1.22474487139158904909864203735)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_1061(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1061] = ((1.40625000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.711111111111111111111111111111));
} else {
coeffs[1061] = ((1.40625000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((51)*(expr[2]))+(((-91)*(expr[3]))+((49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1062(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1062] = ((2.81250000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.711111111111111111111111111111));
} else {
coeffs[1062] = ((2.81250000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((51)*(expr[2]))+(((-91)*(expr[3]))+((49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1063(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1063] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.711111111111111111111111111111));
} else {
coeffs[1063] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-9)*(expr[1]))+(((51)*(expr[2]))+(((-91)*(expr[3]))+((49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1064(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1064] = ((0.0468750000000000000000000000000)*((26.1247009552262626468971346971)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1064] = ((0.0468750000000000000000000000000)*((26.1247009552262626468971346971)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1065(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1065] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1065] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1066(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1066] = ((0.187500000000000000000000000000)*((26.1247009552262626468971346971)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1066] = ((0.187500000000000000000000000000)*((26.1247009552262626468971346971)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1067(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1067] = ((0.375000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1067] = ((0.375000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+((-35)*(expr[2])))));
}
}

void compute_coeffs_scalar_1068(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1068] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1068] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-39)*(expr[1]))+(((125)*(expr[2]))+((-105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1069(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1069] = ((0.140625000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[1069] = ((0.140625000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((180)*(expr[1]))+(((-1110)*(expr[2]))+(((2100)*(expr[3]))+((-1225)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1070(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1070] = ((0.140625000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[1070] = ((0.140625000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((180)*(expr[1]))+(((-1110)*(expr[2]))+(((2100)*(expr[3]))+((-1225)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1071(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1071] = ((0.0703125000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[1071] = ((0.0703125000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((180)*(expr[1]))+(((-1110)*(expr[2]))+(((2100)*(expr[3]))+((-1225)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1072(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1072] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1072] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-465)*(expr[1]))+(((4270)*(expr[2]))+(((-13818)*(expr[3]))+(((17955)*(expr[4]))+((-8085)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1073(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1073] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1073] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-465)*(expr[1]))+(((4270)*(expr[2]))+(((-13818)*(expr[3]))+(((17955)*(expr[4]))+((-8085)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1074(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1074] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1074] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-465)*(expr[1]))+(((4270)*(expr[2]))+(((-13818)*(expr[3]))+(((17955)*(expr[4]))+((-8085)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1075(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1075] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.711111111111111111111111111111));
} else {
coeffs[1075] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((9)*(expr[1]))+(((-51)*(expr[2]))+(((91)*(expr[3]))+((-49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1076(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1076] = ((0.187500000000000000000000000000)*((26.1247009552262626468971346971)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1076] = ((0.187500000000000000000000000000)*((26.1247009552262626468971346971)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-15)*(expr[1]))+(((140)*(expr[2]))+(((-434)*(expr[3]))+(((540)*(expr[4]))+((-231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1077(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1077] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(1.42222222222222222222222222222));
} else {
coeffs[1077] = ((5.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-16)*(expr[1]))+(((78)*(expr[2]))+(((-112)*(expr[3]))+((49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1078(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1078] = ((0.468750000000000000000000000000)*((11.6833214455479226106621848926)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1078] = ((0.468750000000000000000000000000)*((11.6833214455479226106621848926)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-210)*(expr[2]))+(((574)*(expr[3]))+(((-621)*(expr[4]))+((231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1079(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1079] = ((118.125000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.101587301587301587301587301587));
} else {
coeffs[1079] = ((118.125000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[1])+(((-3)*(expr[2]))+(((3)*(expr[3]))+((-1)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1080(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1080] = ((9.84375000000000000000000000000)*((6.24499799839839820584689312094)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1080] = ((9.84375000000000000000000000000)*((6.24499799839839820584689312094)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-3)*(expr[1]))+(((20)*(expr[2]))+(((-42)*(expr[3]))+(((36)*(expr[4]))+((-11)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1081(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1081] = ((19.6875000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.812698412698412698412698412698));
} else {
coeffs[1081] = ((19.6875000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-4)*(expr[1]))+(((6)*(expr[2]))+(((-4)*(expr[3]))+(expr[4]))))));
}
}

void compute_coeffs_scalar_1082(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1082] = ((1.96875000000000000000000000000)*((8.06225774829854965236661323030)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1082] = ((1.96875000000000000000000000000)*((8.06225774829854965236661323030)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-50)*(expr[2]))+(((70)*(expr[3]))+(((-45)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1083(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1083] = ((1.35351562500000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.738816738816738816738816738817));
} else {
coeffs[1083] = ((1.35351562500000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((5)*(expr[1]))+(((-10)*(expr[2]))+(((10)*(expr[3]))+(((-5)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_1084(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1084] = ((2.70703125000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.738816738816738816738816738817));
} else {
coeffs[1084] = ((2.70703125000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((5)*(expr[1]))+(((-10)*(expr[2]))+(((10)*(expr[3]))+(((-5)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_1085(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1085] = ((1.35351562500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.738816738816738816738816738817));
} else {
coeffs[1085] = ((1.35351562500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((5)*(expr[1]))+(((-10)*(expr[2]))+(((10)*(expr[3]))+(((-5)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_1086(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1086] = ((27.0703125000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.738816738816738816738816738817));
} else {
coeffs[1086] = ((27.0703125000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((5)*(expr[1]))+(((-10)*(expr[2]))+(((10)*(expr[3]))+(((-5)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_1087(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1087] = ((27.0703125000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0738816738816738816738816738817));
} else {
coeffs[1087] = ((27.0703125000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((4)*(expr[2]))+(((-6)*(expr[3]))+(((4)*(expr[4]))+((-1)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1088(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1088] = ((27.0703125000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0738816738816738816738816738817));
} else {
coeffs[1088] = ((27.0703125000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((4)*(expr[2]))+(((-6)*(expr[3]))+(((4)*(expr[4]))+((-1)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1089(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1089] = ((13.5351562500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0738816738816738816738816738817));
} else {
coeffs[1089] = ((13.5351562500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((4)*(expr[2]))+(((-6)*(expr[3]))+(((4)*(expr[4]))+((-1)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1090(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1090] = ((216.562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.0738816738816738816738816738817));
} else {
coeffs[1090] = ((216.562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[1]))+(((4)*(expr[2]))+(((-6)*(expr[3]))+(((4)*(expr[4]))+((-1)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1091(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1091] = ((0.273437500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1091] = ((0.273437500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1092(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1092] = ((0.751953125000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.32987012987012987012987012987));
} else {
coeffs[1092] = ((0.751953125000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-138)*(expr[2]))+(((298)*(expr[3]))+(((-261)*(expr[4]))+((81)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1093(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1093] = ((1.50390625000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.32987012987012987012987012987));
} else {
coeffs[1093] = ((1.50390625000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-138)*(expr[2]))+(((298)*(expr[3]))+(((-261)*(expr[4]))+((81)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1094(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1094] = ((0.751953125000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.32987012987012987012987012987));
} else {
coeffs[1094] = ((0.751953125000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-138)*(expr[2]))+(((298)*(expr[3]))+(((-261)*(expr[4]))+((81)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1095(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1095] = ((9.02343750000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.32987012987012987012987012987));
} else {
coeffs[1095] = ((9.02343750000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-138)*(expr[2]))+(((298)*(expr[3]))+(((-261)*(expr[4]))+((81)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1096(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1096] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1096] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1097(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1097] = ((36.0937500000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0554112554112554112554112554113));
} else {
coeffs[1097] = ((36.0937500000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((8)*(expr[2]))+(((-22)*(expr[3]))+(((24)*(expr[4]))+((-9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1098(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1098] = ((36.0937500000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0554112554112554112554112554113));
} else {
coeffs[1098] = ((36.0937500000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((8)*(expr[2]))+(((-22)*(expr[3]))+(((24)*(expr[4]))+((-9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1099(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1099] = ((144.375000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.0554112554112554112554112554113));
} else {
coeffs[1099] = ((144.375000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[1]))+(((8)*(expr[2]))+(((-22)*(expr[3]))+(((24)*(expr[4]))+((-9)*(expr[5])))))));
}
}

}
