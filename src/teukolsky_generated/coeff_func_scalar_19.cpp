#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_950(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[950] = ((3)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.33333333333333333333333333333));
} else {
coeffs[950] = ((3)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(expr[1])));
}
}

void compute_coeffs_scalar_951(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[951] = ((0.375000000000000000000000000000)*((1.87082869338697069279187436616)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[951] = ((0.375000000000000000000000000000)*((1.87082869338697069279187436616)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_952(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[952] = ((0.750000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[952] = ((0.750000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_953(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[953] = ((1.50000000000000000000000000000)*((1.87082869338697069279187436616)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[953] = ((1.50000000000000000000000000000)*((1.87082869338697069279187436616)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_954(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[954] = ((0.0937500000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[954] = ((0.0937500000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((4)*((pow(M,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_955(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[955] = ((0.187500000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[955] = ((0.187500000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_956(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[956] = ((0.375000000000000000000000000000)*((7.41619848709566294871139744080)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[956] = ((0.375000000000000000000000000000)*((7.41619848709566294871139744080)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_957(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[957] = ((-3)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+((pow(r,2))*(((2)*(pow(M,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.666666666666666666666666666667));
} else {
coeffs[957] = ((-3)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+((pow(r,2))*(((2)*(pow(M,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(expr[1]));
}
}

void compute_coeffs_scalar_958(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[958] = ((3)*((pow(a,2))*((r)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.666666666666666666666666666667));
} else {
coeffs[958] = ((3)*((pow(a,2))*((r)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(expr[1]));
}
}

void compute_coeffs_scalar_959(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[959] = ((-1.50000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.666666666666666666666666666667));
} else {
coeffs[959] = ((-1.50000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(expr[1]));
}
}

void compute_coeffs_scalar_960(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[960] = ((0.500000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[960] = ((0.500000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+((-5)*(expr[2]))));
}
}

void compute_coeffs_scalar_961(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[961] = ((0.500000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[961] = ((0.500000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+((-5)*(expr[2]))));
}
}

void compute_coeffs_scalar_962(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[962] = ((0.250000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[962] = ((0.250000000000000000000000000000)*((4.58257569495584000658804719373)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+((-5)*(expr[2]))));
}
}

void compute_coeffs_scalar_963(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[963] = ((0.125000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[963] = ((0.125000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[1]))+(((70)*(expr[2]))+((-63)*(expr[3])))));
}
}

void compute_coeffs_scalar_964(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[964] = ((0.125000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[964] = ((0.125000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[1]))+(((70)*(expr[2]))+((-63)*(expr[3])))));
}
}

void compute_coeffs_scalar_965(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[965] = ((0.0625000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[965] = ((0.0625000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[1]))+(((70)*(expr[2]))+((-63)*(expr[3])))));
}
}

void compute_coeffs_scalar_966(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[966] = ((3)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(1.33333333333333333333333333333));
} else {
coeffs[966] = ((3)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+((-1)*(expr[1]))));
}
}

void compute_coeffs_scalar_967(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[967] = ((1.50000000000000000000000000000)*((1.87082869338697069279187436616)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[967] = ((1.50000000000000000000000000000)*((1.87082869338697069279187436616)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_968(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[968] = ((0.375000000000000000000000000000)*((7.41619848709566294871139744080)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[968] = ((0.375000000000000000000000000000)*((7.41619848709566294871139744080)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_969(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[969] = ((1.87500000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.06666666666666666666666666667));
} else {
coeffs[969] = ((1.87500000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_970(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[970] = ((1.87500000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.06666666666666666666666666667));
} else {
coeffs[970] = ((1.87500000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_971(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[971] = ((7.50000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.06666666666666666666666666667));
} else {
coeffs[971] = ((7.50000000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+((-1)*(expr[2])))));
}
}

void compute_coeffs_scalar_972(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[972] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[972] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_973(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[973] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[973] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_974(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[974] = ((3.75000000000000000000000000000)*((1.73205080756887729352744634151)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[974] = ((3.75000000000000000000000000000)*((1.73205080756887729352744634151)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_975(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[975] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[975] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_976(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[976] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[976] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_977(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[977] = ((0.937500000000000000000000000000)*((6.74536878161602073277515280575)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[977] = ((0.937500000000000000000000000000)*((6.74536878161602073277515280575)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_978(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[978] = ((3.75000000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((10)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.266666666666666666666666666667));
} else {
coeffs[978] = ((3.75000000000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((10)*((M)*(pow(r,3))))+((-6)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(expr[2])));
}
}

void compute_coeffs_scalar_979(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[979] = ((7.50000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.266666666666666666666666666667));
} else {
coeffs[979] = ((7.50000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(expr[2])));
}
}

void compute_coeffs_scalar_980(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[980] = ((15)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.266666666666666666666666666667));
} else {
coeffs[980] = ((15)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[1]))+(expr[2])));
}
}

void compute_coeffs_scalar_981(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[981] = ((1.87500000000000000000000000000)*((1.22474487139158904909864203735)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((10)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[981] = ((1.87500000000000000000000000000)*((1.22474487139158904909864203735)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((10)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_982(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[982] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[982] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_983(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[983] = ((7.50000000000000000000000000000)*((1.22474487139158904909864203735)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[983] = ((7.50000000000000000000000000000)*((1.22474487139158904909864203735)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_984(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[984] = ((0.0937500000000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((10)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[984] = ((0.0937500000000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((10)*((M)*(pow(r,3))))+((-6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_985(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[985] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[985] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_986(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[986] = ((0.375000000000000000000000000000)*((21.3307290077015417508863915213)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[986] = ((0.375000000000000000000000000000)*((21.3307290077015417508863915213)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_987(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[987] = ((0.500000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[987] = ((0.500000000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-3)*(expr[1]))));
}
}

void compute_coeffs_scalar_988(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[988] = ((1.25000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[988] = ((1.25000000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-9)*(expr[2])))));
}
}

void compute_coeffs_scalar_989(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[989] = ((1.25000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[989] = ((1.25000000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-9)*(expr[2])))));
}
}

void compute_coeffs_scalar_990(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[990] = ((0.625000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[990] = ((0.625000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-9)*(expr[2])))));
}
}

void compute_coeffs_scalar_991(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[991] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[991] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-39)*(expr[1]))+(((125)*(expr[2]))+((-105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_992(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[992] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[992] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-39)*(expr[1]))+(((125)*(expr[2]))+((-105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_993(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[993] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[993] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-39)*(expr[1]))+(((125)*(expr[2]))+((-105)*(expr[3]))))));
}
}

void compute_coeffs_scalar_994(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[994] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[994] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((5)*((M)*(pow(r,3))))+((-3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((120)*(expr[1]))+(((-630)*(expr[2]))+(((1176)*(expr[3]))+((-693)*(expr[4])))))));
}
}

void compute_coeffs_scalar_995(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[995] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[995] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((120)*(expr[1]))+(((-630)*(expr[2]))+(((1176)*(expr[3]))+((-693)*(expr[4])))))));
}
}

void compute_coeffs_scalar_996(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[996] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[996] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((120)*(expr[1]))+(((-630)*(expr[2]))+(((1176)*(expr[3]))+((-693)*(expr[4])))))));
}
}

void compute_coeffs_scalar_997(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[997] = ((15)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.266666666666666666666666666667));
} else {
coeffs[997] = ((15)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[1])+((-1)*(expr[2]))));
}
}

void compute_coeffs_scalar_998(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[998] = ((7.50000000000000000000000000000)*((1.22474487139158904909864203735)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[998] = ((7.50000000000000000000000000000)*((1.22474487139158904909864203735)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-3)*(expr[1]))+(((10)*(expr[2]))+((-7)*(expr[3])))));
}
}

void compute_coeffs_scalar_999(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[999] = ((0.375000000000000000000000000000)*((21.3307290077015417508863915213)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[999] = ((0.375000000000000000000000000000)*((21.3307290077015417508863915213)*((a)*((M)*(pow(r,3)))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((5)*(expr[1]))+(((-35)*(expr[2]))+(((63)*(expr[3]))+((-33)*(expr[4]))))));
}
}

}
