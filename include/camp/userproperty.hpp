

#ifndef CAMP_USERPROPERTY_HPP
#define CAMP_USERPROPERTY_HPP


#include <camp/property.hpp>


namespace camp
{
class Class;

/**
 * \brief Specialized type of property for user types
 *
 */
class CAMP_API UserProperty : public Property
{
public:

    /**
     * \brief Construct the property from its description
     *
     * \param name Name of the property
     * \param propClass Eumeration the property is bound to
     */
    UserProperty(const std::string& name, const Class& propClass);

    /**
     * \brief Destructor
     */
    virtual ~UserProperty();

    /**
     * \brief Get the owner class
     *
     * \return Class the property is bound to
     */
    const Class& getClass() const;

    /**
     * \brief Accept the visitation of a ClassVisitor
     *
     * \param visitor Visitor to accept
     */
    virtual void accept(ClassVisitor& visitor) const;

private:

    const Class* m_class; ///< Owner class of the property
};

} // namespace camp


#endif // CAMP_ENUMPROPERTY_HPP
