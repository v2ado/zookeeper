/*
 * ZooKeeperException.h -- 
 *
 * Authors:
 *     shuidu(|EMAIL)|, 04/15/16 10:44:06
 *
 */


#ifndef ZOOKEEPEREXCEPTION_H_
#define ZOOKEEPEREXCEPTION_H_

#include <exception>
#include <string>

namespace ZooKeeper {

class ZooKeeperException {
public:
    explicit ZooKeeperException(int error);
    explicit ZooKeeperException(int error, const std::string &description);
    virtual ~ZooKeeperException() override; /* C++ 11 */

    virtual const char *what() const override;

private:
    std::string _what;
};

} // namespace 

#endif //ZOOKEEPEREXCEPTION_H_