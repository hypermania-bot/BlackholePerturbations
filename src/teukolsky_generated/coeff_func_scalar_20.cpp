#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1000(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1000] = ((7.50000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(1.06666666666666666666666666667));
} else {
coeffs[1000] = ((7.50000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-2)*(expr[1]))+(expr[2]))));
}
}

void compute_coeffs_scalar_1001(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1001] = ((3.75000000000000000000000000000)*((1.73205080756887729352744634151)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1001] = ((3.75000000000000000000000000000)*((1.73205080756887729352744634151)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1002(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1002] = ((0.937500000000000000000000000000)*((6.74536878161602073277515280575)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1002] = ((0.937500000000000000000000000000)*((6.74536878161602073277515280575)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-20)*(expr[1]))+(((70)*(expr[2]))+(((-84)*(expr[3]))+((33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1003(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1003] = ((1.09375000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.914285714285714285714285714286));
} else {
coeffs[1003] = ((1.09375000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-3)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_1004(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1004] = ((2.18750000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.914285714285714285714285714286));
} else {
coeffs[1004] = ((2.18750000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-3)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_1005(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1005] = ((1.09375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.914285714285714285714285714286));
} else {
coeffs[1005] = ((1.09375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-3)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_1006(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1006] = ((13.1250000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.914285714285714285714285714286));
} else {
coeffs[1006] = ((13.1250000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-3)*(expr[2]))+(expr[3])))));
}
}

void compute_coeffs_scalar_1007(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1007] = ((0.273437500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1007] = ((0.273437500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1008(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1008] = ((0.546875000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1008] = ((0.546875000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1009(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1009] = ((0.273437500000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1009] = ((0.273437500000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1010(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1010] = ((3.28125000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1010] = ((3.28125000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1011(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1011] = ((13.1250000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.152380952380952380952380952381));
} else {
coeffs[1011] = ((13.1250000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((2)*(expr[2]))+((-1)*(expr[3])))));
}
}

void compute_coeffs_scalar_1012(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1012] = ((13.1250000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.152380952380952380952380952381));
} else {
coeffs[1012] = ((13.1250000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((2)*(expr[2]))+((-1)*(expr[3])))));
}
}

void compute_coeffs_scalar_1013(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1013] = ((52.5000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.152380952380952380952380952381));
} else {
coeffs[1013] = ((52.5000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[1]))+(((2)*(expr[2]))+((-1)*(expr[3])))));
}
}

void compute_coeffs_scalar_1014(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1014] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1014] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1015(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1015] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1015] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1016(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1016] = ((26.2500000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1016] = ((26.2500000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1017(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1017] = ((0.375000000000000000000000000000)*((1.87082869338697069279187436616)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1017] = ((0.375000000000000000000000000000)*((1.87082869338697069279187436616)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1018(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1018] = ((0.656250000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.52380952380952380952380952381));
} else {
coeffs[1018] = ((0.656250000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((11)*(expr[1]))+(((-35)*(expr[2]))+((25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1019(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1019] = ((1.31250000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.52380952380952380952380952381));
} else {
coeffs[1019] = ((1.31250000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((11)*(expr[1]))+(((-35)*(expr[2]))+((25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1020(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1020] = ((2.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.52380952380952380952380952381));
} else {
coeffs[1020] = ((2.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((11)*(expr[1]))+(((-35)*(expr[2]))+((25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1021(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1021] = ((0.0468750000000000000000000000000)*((13.8744369255116079467397289461)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1021] = ((0.0468750000000000000000000000000)*((13.8744369255116079467397289461)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((22)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1022(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1022] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1022] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1023(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1023] = ((0.187500000000000000000000000000)*((13.8744369255116079467397289461)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1023] = ((0.187500000000000000000000000000)*((13.8744369255116079467397289461)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1024(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1024] = ((0.500000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1024] = ((0.500000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+((-5)*(expr[2]))));
}
}

void compute_coeffs_scalar_1025(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1025] = ((1.75000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.14285714285714285714285714286));
} else {
coeffs[1025] = ((1.75000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((30)*(expr[2]))+((-25)*(expr[3])))));
}
}

void compute_coeffs_scalar_1026(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1026] = ((1.75000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.14285714285714285714285714286));
} else {
coeffs[1026] = ((1.75000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((30)*(expr[2]))+((-25)*(expr[3])))));
}
}

void compute_coeffs_scalar_1027(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1027] = ((0.875000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.14285714285714285714285714286));
} else {
coeffs[1027] = ((0.875000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((30)*(expr[2]))+((-25)*(expr[3])))));
}
}

void compute_coeffs_scalar_1028(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1028] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1028] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((45)*(expr[1]))+(((-285)*(expr[2]))+(((539)*(expr[3]))+((-315)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1029(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1029] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1029] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((45)*(expr[1]))+(((-285)*(expr[2]))+(((539)*(expr[3]))+((-315)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1030(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1030] = ((0.0312500000000000000000000000000)*((8.77496438739212206040638830742)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1030] = ((0.0312500000000000000000000000000)*((8.77496438739212206040638830742)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((45)*(expr[1]))+(((-285)*(expr[2]))+(((539)*(expr[3]))+((-315)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1031(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1031] = ((2.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(1.52380952380952380952380952381));
} else {
coeffs[1031] = ((2.62500000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-11)*(expr[1]))+(((35)*(expr[2]))+((-25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1032(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1032] = ((0.187500000000000000000000000000)*((13.8744369255116079467397289461)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1032] = ((0.187500000000000000000000000000)*((13.8744369255116079467397289461)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-110)*(expr[2]))+(((196)*(expr[3]))+((-105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1033(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1033] = ((52.5000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.152380952380952380952380952381));
} else {
coeffs[1033] = ((52.5000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[1])+(((-2)*(expr[2]))+(expr[3]))));
}
}

void compute_coeffs_scalar_1034(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1034] = ((26.2500000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1034] = ((26.2500000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[1]))+(((5)*(expr[2]))+(((-7)*(expr[3]))+((3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1035(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1035] = ((13.1250000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.914285714285714285714285714286));
} else {
coeffs[1035] = ((13.1250000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-3)*(expr[1]))+(((3)*(expr[2]))+((-1)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1036(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1036] = ((3.28125000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1036] = ((3.28125000000000000000000000000)*((3.31662479035539984911493273667)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1037(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1037] = ((2.46093750000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.812698412698412698412698412698));
} else {
coeffs[1037] = ((2.46093750000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-6)*(expr[2]))+(((4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1038(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1038] = ((2.46093750000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.812698412698412698412698412698));
} else {
coeffs[1038] = ((2.46093750000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-6)*(expr[2]))+(((4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1039(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1039] = ((1.23046875000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.812698412698412698412698412698));
} else {
coeffs[1039] = ((1.23046875000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-6)*(expr[2]))+(((4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1040(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1040] = ((19.6875000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.812698412698412698412698412698));
} else {
coeffs[1040] = ((19.6875000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-6)*(expr[2]))+(((4)*(expr[3]))+((-1)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1041(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1041] = ((0.246093750000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1041] = ((0.246093750000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1042(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1042] = ((0.246093750000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1042] = ((0.246093750000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1043(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1043] = ((0.123046875000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1043] = ((0.123046875000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1044(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1044] = ((1.96875000000000000000000000000)*((8.06225774829854965236661323030)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1044] = ((1.96875000000000000000000000000)*((8.06225774829854965236661323030)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1045(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1045] = ((9.84375000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.101587301587301587301587301587));
} else {
coeffs[1045] = ((9.84375000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((3)*(expr[2]))+(((-3)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_1046(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1046] = ((19.6875000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.101587301587301587301587301587));
} else {
coeffs[1046] = ((19.6875000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((3)*(expr[2]))+(((-3)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_1047(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1047] = ((9.84375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.101587301587301587301587301587));
} else {
coeffs[1047] = ((9.84375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((3)*(expr[2]))+(((-3)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_1048(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1048] = ((118.125000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.101587301587301587301587301587));
} else {
coeffs[1048] = ((118.125000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[1]))+(((3)*(expr[2]))+(((-3)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_1049(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1049] = ((0.820312500000000000000000000000)*((6.24499799839839820584689312094)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1049] = ((0.820312500000000000000000000000)*((6.24499799839839820584689312094)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-20)*(expr[2]))+(((42)*(expr[3]))+(((-36)*(expr[4]))+((11)*(expr[5])))))));
}
}

}
