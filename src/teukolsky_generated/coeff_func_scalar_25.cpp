#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1250(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1250] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1250] = ((0.0156250000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((45)*(expr[1]))+(((-175)*(expr[2]))+((147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1251(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1251] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1251] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((45)*(expr[1]))+(((-175)*(expr[2]))+((147)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1252(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1252] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((46.6666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-12)*(((8)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((8)*(r)))))))+(((-1.33333333333333333333333333333)*(((14)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((14)*(r)))))))+((4)*(((17)*(pow(a,3)))+((a)*((r)*((M)+((17)*(r))))))))))));
} else {
coeffs[1252] = ((0.0312500000000000000000000000000)*((7.41619848709566294871139744080)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((175)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-147)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((14)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((14)*(r))))))*(expr[1])))+(((10)*((((17)*(pow(a,3)))+((a)*((r)*((M)+((17)*(r))))))*(expr[2])))+(((-42)*((((8)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((8)*(r))))))*(expr[3])))+((210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1253(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1253] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1253] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((4)*((M)*(pow(r,3))))+((-4)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((105)*(expr[1]))+(((-455)*(expr[2]))+(((735)*(expr[3]))+((-396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1254(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1254] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((6.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((-58.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-28)*(((2)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((2)*(r)))))))+((12)*(((9)*(pow(a,3)))+((a)*((r)*(((-53)*(M))+((9)*(r))))))))))));
} else {
coeffs[1254] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-105)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((455)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-735)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((396)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((10)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[1])))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*(((-17)*(M))+((2)*(r))))))*(expr[2])))+(((42)*((((9)*(pow(a,3)))+((a)*((r)*(((-53)*(M))+((9)*(r))))))*(expr[3])))+((-264)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1255(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1255] = ((1.25000000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.60000000000000000000000000000));
} else {
coeffs[1255] = ((1.25000000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(expr[2])));
}
}

void compute_coeffs_scalar_1256(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1256] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.400000000000000000000000000000)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((0.800000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+((-1.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))))));
} else {
coeffs[1256] = ((1.25000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2])))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+((2)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))))));
}
}

void compute_coeffs_scalar_1257(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1257] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1257] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1258(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1258] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1258] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1259(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1259] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-26)*(M))+(r))))))+(((-0.857142857142857142857142857143)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.800000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))))));
} else {
coeffs[1259] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-6)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+((((pow(a,3))+((a)*((r)*(((-26)*(M))+(r)))))*(expr[1]))+(((2)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3])))))))));
}
}

void compute_coeffs_scalar_1260(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1260] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1260] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1261(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1261] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-12)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+(((6)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((2)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[1261] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((9)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-30)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+((7)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1262(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1262] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1262] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1263(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1263] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1263] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1264(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1264] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-62)*(M))+(r))))))+(((-3.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*((pow(a,3))+((a)*((r)*(((2)*(M))+(r))))))+((-2)*((pow(a,3))+((a)*((r)*(((26)*(M))+(r))))))))))));
} else {
coeffs[1264] = ((0.0625000000000000000000000000000)*((19.6214168703485834685260037892)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((-62)*(M))+(r))))*(expr[1]))))+(((-5)*(((pow(a,3))+((a)*((r)*(((26)*(M))+(r)))))*(expr[2])))+(((21)*(((pow(a,3))+((a)*((r)*(((2)*(M))+(r)))))*(expr[3])))+((-15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1265(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1265] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1265] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1266(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1266] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((29.3333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((56)*((pow(a,3))+((a)*((r)*(((-4)*(M))+(r))))))+(((-13.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-24)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[1266] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((168)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-99)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((140)*(((pow(a,3))+((a)*((r)*(((-4)*(M))+(r)))))*(expr[2])))+(((-84)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+((132)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1267(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1267] = ((0.820312500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.21904761904761904761904761905));
} else {
coeffs[1267] = ((0.820312500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+((expr[2])+((-1)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1268(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1268] = ((1.64062500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.21904761904761904761904761905));
} else {
coeffs[1268] = ((1.64062500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+((expr[2])+((-1)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1269(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1269] = ((1.64062500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((1.06666666666666666666666666667)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2.28571428571428571428571428571)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((0.571428571428571428571428571429)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+((-0.800000000000000000000000000000)*((a)*(((2)*(pow(a,2)))+((r)*(((-7)*(M))+((2)*(r))))))))))));
} else {
coeffs[1269] = ((1.64062500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1]))+(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2]))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((-2)*((a)*((((2)*(pow(a,2)))+((r)*(((-7)*(M))+((2)*(r)))))*(expr[2]))))+((2)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1270(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1270] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1270] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1271(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1271] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1271] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1272(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1272] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((48)*((a)*((M)*(r))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-29)*(M))+(r))))))+(((0.888888888888888888888888888889)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-1.71428571428571428571428571429)*((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))))))));
} else {
coeffs[1272] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((-29)*(M))+(r)))))*(expr[1])))+(((90)*((a)*((M)*((r)*(expr[2])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))*(expr[3])))+((4)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1273(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1273] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1273] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-4)*(expr[1]))+(((-10)*(expr[2]))+(((28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1274(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1274] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1274] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-4)*(expr[1]))+(((-10)*(expr[2]))+(((28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1275(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1275] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-16)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+(((8)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+((1.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))))))));
} else {
coeffs[1275] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-8)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((20)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((-56)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3])))+((6)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1276(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1276] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1276] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1277(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1277] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1277] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1278(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1278] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-180)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((4)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((8)*((pow(a,3))+((a)*((r)*(((16)*(M))+(r))))))+((-1.33333333333333333333333333333)*(((8)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((8)*(r))))))))))));
} else {
coeffs[1278] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[1])))+(((-420)*((a)*((M)*((r)*(expr[2])))))+(((28)*(((pow(a,3))+((a)*((r)*(((16)*(M))+(r)))))*(expr[3])))+(((-6)*((((8)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((8)*(r))))))*(expr[4])))+((22)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1279(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1279] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1279] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1280(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1280] = ((1.09375000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.82857142857142857142857142857));
} else {
coeffs[1280] = ((1.09375000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-11)*(expr[2]))+((9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1281(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1281] = ((1.09375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.82857142857142857142857142857));
} else {
coeffs[1281] = ((1.09375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-11)*(expr[2]))+((9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1282(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1282] = ((1.09375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.82857142857142857142857142857)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-6.09523809523809523809523809524)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((1.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((4)*(r)))))))))));
} else {
coeffs[1282] = ((1.09375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((4)*((((4)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((4)*(r))))))*(expr[2])))+((-12)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1283(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1283] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1283] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1284(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1284] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1284] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1285(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1285] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-9.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-12)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((16)*(M))+(r))))))+((0.285714285714285714285714285714)*(((66)*(pow(a,3)))+((2)*((a)*((r)*(((32)*(M))+((33)*(r)))))))))))));
} else {
coeffs[1285] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((16)*(M))+(r)))))*(expr[1])))+(((-30)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((((66)*(pow(a,3)))+((2)*((a)*((r)*(((32)*(M))+((33)*(r)))))))*(expr[3]))+((-42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1286(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1286] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1286] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1287(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1287] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1287] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1288(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1288] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((-16)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((24)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+((-2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))))))));
} else {
coeffs[1288] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((-40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[2])))+(((84)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[3])))+((-12)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1289(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1289] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1289] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1290(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1290] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1290] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1291(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1291] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-54)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((56)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((-12)*(((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r)))))))+(((-0.666666666666666666666666666667)*((a)*(((17)*(pow(a,2)))+((r)*(((206)*(M))+((17)*(r)))))))+((2.66666666666666666666666666667)*(((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r))))))))))))));
} else {
coeffs[1291] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((588)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-297)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((206)*(M))+((17)*(r)))))*(expr[1]))))+(((140)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((-42)*((((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r))))))*(expr[3])))+(((12)*((((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r))))))*(expr[4])))+((-297)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1292(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1292] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1292] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((6)*(expr[1]))+((-15)*(expr[2])))));
}
}

void compute_coeffs_scalar_1293(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1293] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1293] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((18)*(expr[1]))+((-25)*(expr[2])))));
}
}

void compute_coeffs_scalar_1294(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1294] = ((0.0546875000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-18.2857142857142857142857142857));
} else {
coeffs[1294] = ((0.0546875000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-111)*(expr[1]))+(((305)*(expr[2]))+((-225)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1295(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1295] = ((0.109375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-18.2857142857142857142857142857));
} else {
coeffs[1295] = ((0.109375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-111)*(expr[1]))+(((305)*(expr[2]))+((-225)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1296(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1296] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((18.2857142857142857142857142857)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((22)*(pow(a,3)))+(((-266)*((a)*((M)*(r))))+((22)*((a)*(pow(r,2)))))))+(((42.8571428571428571428571428571)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((-4)*(((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))))))));
} else {
coeffs[1296] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((111)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-305)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((((22)*(pow(a,3)))+(((-266)*((a)*((M)*(r))))+((22)*((a)*(pow(r,2))))))*(expr[1]))+(((-10)*((((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))*(expr[2])))+((150)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1297(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1297] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1297] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-75)*(expr[1]))+(((285)*(expr[2]))+((-245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1298(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1298] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1298] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-75)*(expr[1]))+(((285)*(expr[2]))+((-245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1299(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1299] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-678)*(pow(a,3)))+((2)*((a)*((((433)*(M))+((-339)*(r)))*(r))))))+(((93.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-20)*((pow(a,3))+((a)*((r)*(((3)*(M))+(r))))))+((4)*(((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))))))));
} else {
coeffs[1299] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-285)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((245)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-30)*(((pow(a,3))+((a)*((r)*(((3)*(M))+(r)))))*(expr[1])))+(((10)*((((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))*(expr[2])))+(((((-678)*(pow(a,3)))+((2)*((a)*((((433)*(M))+((-339)*(r)))*(r)))))*(expr[3]))+((420)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

}
