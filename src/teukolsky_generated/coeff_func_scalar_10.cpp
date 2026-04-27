#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_500(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[500] = ((0.0312500000000000000000000000000)*((6.24499799839839820584689312094)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((120)*((a)*((M)*(r))))+(((-44)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-28)*((pow(a,3))+((a)*((r)*(((7)*(M))+(r))))))+((12)*(((6)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((6)*(r)))))))))));
} else {
coeffs[500] = ((0.0312500000000000000000000000000)*((6.24499799839839820584689312094)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-105)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((315)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-231)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((210)*((a)*((M)*((r)*(expr[1])))))+(((-70)*(((pow(a,3))+((a)*((r)*(((7)*(M))+(r)))))*(expr[2])))+(((42)*((((6)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((6)*(r))))))*(expr[3])))+((-198)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_501(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[501] = ((1.25000000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.60000000000000000000000000000));
} else {
coeffs[501] = ((1.25000000000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-1)*(expr[2]))));
}
}

void compute_coeffs_scalar_502(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[502] = ((1.25000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[502] = ((1.25000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[2])));
}
}

void compute_coeffs_scalar_503(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[503] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.400000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-0.800000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+((1.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))))));
} else {
coeffs[503] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+((-2)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))))));
}
}

void compute_coeffs_scalar_504(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[504] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[504] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_505(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[505] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[505] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_506(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[506] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-26)*(M))+(r))))))+(((0.857142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-0.800000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))))))));
} else {
coeffs[506] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((6)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((-26)*(M))+(r))))*(expr[1]))))+(((-2)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_507(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[507] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[507] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[2]))+((-14)*(expr[3])))));
}
}

void compute_coeffs_scalar_508(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[508] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[508] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_509(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[509] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((12)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+(((-6)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-2)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))))));
} else {
coeffs[509] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-9)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((30)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+((-7)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_510(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[510] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[510] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_511(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[511] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[511] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_512(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[512] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((3.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-6)*((pow(a,3))+((a)*((r)*(((2)*(M))+(r))))))+((2)*((pow(a,3))+((a)*((r)*(((26)*(M))+(r)))))))))));
} else {
coeffs[512] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+((((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[1]))+(((5)*(((pow(a,3))+((a)*((r)*(((26)*(M))+(r)))))*(expr[2])))+(((-21)*(((pow(a,3))+((a)*((r)*(((2)*(M))+(r)))))*(expr[3])))+((15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_513(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[513] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[513] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-6)*((M)*(pow(r,3))))+((3)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-70)*(expr[2]))+(((168)*(expr[3]))+((-99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_514(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[514] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[514] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_515(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[515] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-29.3333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-56)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+(((13.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((24)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))))))));
} else {
coeffs[515] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-168)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((99)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-140)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+(((84)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+((-132)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_516(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[516] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[516] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-3)*(expr[1]))));
}
}

void compute_coeffs_scalar_517(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[517] = ((0.625000000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.60000000000000000000000000000));
} else {
coeffs[517] = ((0.625000000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+((4)*(expr[2])))));
}
}

void compute_coeffs_scalar_518(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[518] = ((1.25000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[518] = ((1.25000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+((-4)*(expr[2])))));
}
}

void compute_coeffs_scalar_519(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[519] = ((0.625000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[519] = ((0.625000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+((-4)*(expr[2])))));
}
}

void compute_coeffs_scalar_520(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[520] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.400000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))))));
} else {
coeffs[520] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+((4)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))))));
}
}

void compute_coeffs_scalar_521(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[521] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[521] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((18)*(expr[1]))+((-25)*(expr[2])))));
}
}

void compute_coeffs_scalar_522(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[522] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[522] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-18)*(expr[1]))+((25)*(expr[2])))));
}
}

void compute_coeffs_scalar_523(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[523] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[523] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-18)*(expr[1]))+((25)*(expr[2])))));
}
}

void compute_coeffs_scalar_524(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[524] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-8.57142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((5)*(r)))))))+((0.400000000000000000000000000000)*(((32)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((16)*(r))))))))))));
} else {
coeffs[524] = ((0.0625000000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-18)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((5)*(r))))))*(expr[1])))+(((((32)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((16)*(r)))))))*(expr[2]))+((-30)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_525(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[525] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[525] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+(((-75)*(expr[2]))+((56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_526(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[526] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[526] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+(((75)*(expr[2]))+((-56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_527(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[527] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[527] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+(((75)*(expr[2]))+((-56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_528(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[528] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((4)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))+((-4)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))))));
} else {
coeffs[528] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-30)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-56)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[1])))+(((-10)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[2])))+((14)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_529(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[529] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[529] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-45)*(expr[1]))+(((175)*(expr[2]))+((-147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_530(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[530] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[530] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((45)*(expr[1]))+(((-175)*(expr[2]))+((147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_531(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[531] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[531] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((45)*(expr[1]))+(((-175)*(expr[2]))+((147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_532(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[532] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((-46.6666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((12)*(((8)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((8)*(r)))))))+(((0.666666666666666666666666666667)*(((28)*(pow(a,3)))+((2)*((a)*((r)*(((17)*(M))+((14)*(r))))))))+((-4)*(((17)*(pow(a,3)))+((a)*((r)*((M)+((17)*(r)))))))))))));
} else {
coeffs[532] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-175)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((147)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((((28)*(pow(a,3)))+((2)*((a)*((r)*(((17)*(M))+((14)*(r)))))))*(expr[1]))+(((-10)*((((17)*(pow(a,3)))+((a)*((r)*((M)+((17)*(r))))))*(expr[2])))+(((42)*((((8)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((8)*(r))))))*(expr[3])))+((-210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_533(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[533] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[533] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-12)*((M)*(pow(r,3))))+((6)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((455)*(expr[2]))+(((-735)*(expr[3]))+((396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_534(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[534] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[534] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((105)*(expr[1]))+(((-455)*(expr[2]))+(((735)*(expr[3]))+((-396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_535(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[535] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[535] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((105)*(expr[1]))+(((-455)*(expr[2]))+(((735)*(expr[3]))+((-396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_536(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[536] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((-6.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((58.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((28)*(((2)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((2)*(r)))))))+((-12)*(((9)*(pow(a,3)))+((a)*((r)*(((-53)*(M))+((9)*(r))))))))))));
} else {
coeffs[536] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((105)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-455)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((735)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-396)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((-10)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((70)*((((2)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((2)*(r))))))*(expr[2])))+(((-42)*((((9)*(pow(a,3)))+((a)*((r)*(((-53)*(M))+((9)*(r))))))*(expr[3])))+((264)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_537(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[537] = ((7.50000000000000000000000000000)*(((pow(a,2))+((-3)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.266666666666666666666666666667));
} else {
coeffs[537] = ((7.50000000000000000000000000000)*(((pow(a,2))+((-3)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+((-1)*(expr[2]))));
}
}

void compute_coeffs_scalar_538(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[538] = ((7.50000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.266666666666666666666666666667));
} else {
coeffs[538] = ((7.50000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(expr[2])));
}
}

void compute_coeffs_scalar_539(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[539] = ((3.75000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.266666666666666666666666666667));
} else {
coeffs[539] = ((3.75000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(expr[2])));
}
}

void compute_coeffs_scalar_540(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[540] = ((7.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((0.666666666666666666666666666667)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.400000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[540] = ((7.50000000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1]))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2]))));
}
}

void compute_coeffs_scalar_541(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[541] = ((0.750000000000000000000000000000)*((4.18330013267037773989086012893)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-0.971428571428571428571428571429)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-2)*(M))+(r))))))));
} else {
coeffs[541] = ((0.750000000000000000000000000000)*((4.18330013267037773989086012893)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[1]))+(((-6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_542(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[542] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(((pow(a,2))+((-3)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[542] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(((pow(a,2))+((-3)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[1]))+(((10)*(expr[2]))+((-7)*(expr[3])))));
}
}

void compute_coeffs_scalar_543(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[543] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[543] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_544(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[544] = ((1.87500000000000000000000000000)*((1.22474487139158904909864203735)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[544] = ((1.87500000000000000000000000000)*((1.22474487139158904909864203735)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_545(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[545] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[545] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))));
}
}

void compute_coeffs_scalar_546(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[546] = ((0.937500000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[546] = ((0.937500000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-35)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+((21)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_547(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[547] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*(((pow(a,2))+((-3)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[547] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*(((pow(a,2))+((-3)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[1]))+(((-35)*(expr[2]))+(((63)*(expr[3]))+((-33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_548(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[548] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[548] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_549(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[549] = ((0.0937500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[549] = ((0.0937500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

}
