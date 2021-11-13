#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
public:
    
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void lerDados();
    
    float media(float n1, float n2, float n3, char tm);

    
    
private:

};

#endif /* CALUNO_H */

